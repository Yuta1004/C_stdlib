#include <stdio.h>
#include "mstdlib.h"

int main(int argc, char *argv[]){
    printf("%d\n", mstrtol(argv[1], &argv[1], 0));

    return 0;
}