#include "stdio.h"
#include "stdlib.h"
#include "songuyento.h"

int main(int argc, char *argv[]) {
    if (argc != 3) {
        printf("Usage: %s <number>\\n", argv[0]);
        return 1;
    }

    int max = 0;
    int min = 0;
    int num1= atoi(argv[1]);
    int num2= atoi(argv[2]);

    if(num1 > num2)
    {
        max = num1;
        min = num2;
    }
    else
    {
        max = num2;
        min = num1;
    }
    insonguyento(min, max);
}
