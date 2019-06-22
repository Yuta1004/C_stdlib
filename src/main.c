#include <stdio.h>
#include "mstdlib.h"

int main(int argc, char *argv[]){
    char num_str[10];
    printf("Please input the number : ");
    scanf("%s", num_str);

    printf("%d\n", mstrtol(num_str, (char **)(&num_str), 0));

    return 0;
}