#include "mstdlib.h"

long mstrtol(char *nptr, char **endp, int base){
    // 負の数が指定された
    char minus_flag = (int)(*nptr == '-');
    if(minus_flag){
        ++ nptr;
    }

    // base自動判断
    if(base == 0){
        if(nptr[0] == '0' && nptr[1] == 'x'){
            base = 16;
            nptr += 2;
        }else if(nptr[0] == '0'){
            base = 8;
            ++ nptr;
        }else{
            base = 10;
        }
    }

    // 変換
    long value = 0L;
    for(; *nptr != '\0' && value >= 0; ++ nptr){
        switch(base){
            case 16:
                if('0' <= *nptr && *nptr <= '9'){
                    value = value * 16 + (long)(*nptr - '0');
                }else if('a' <= *nptr && *nptr <= 'f'){
                    value = value * 16 + (long)(*nptr - 'a' + 10);
                }else{
                    value = -1;
                }
                break;

            case 8:
                if('0' <= *nptr && *nptr <= '7'){
                    value = value * 8 + (long)(*nptr - '0');
                }else{
                    value = -1;
                }
                break;

            default:
                if('0' <= *nptr && *nptr <= '9'){
                    value = value * base + (long)(*nptr - '0');
                }else{
                    value = -1;
                }
                break;
        }
    }

    // マイナス値が指定された場合は2の補数表現にする
    if(minus_flag){
        value = ~value;
        value += 1;
    }

    return value;
}