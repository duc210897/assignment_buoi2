#include "stdio.h"
#include "stdlib.h"

#define CHECK_SO_NGUYEN_TO(x, y)       (x%y)

int main(int argc, char *argv[]) {
    if (argc != 3) {
        printf("Usage: %s <number>\\n", argv[0]);
        return 1;
    }

    int flag = 0;
    int count = 0;
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
    printf("so nguyen to: ");
    for(int i = min; i <= max; i++)
    {
        if(i == 0 || i == 1)
        {
            continue;
        }
        for(int j = 2; j <= i/2; j++)
        {
           if(CHECK_SO_NGUYEN_TO(i, j) == 0)
           {
            flag = 1;
            break;
           }
        }

        if (flag == 0)
        {
             count++;
             printf("%d  ", i);
        }
        flag = 0;
    }
    if (count == 0) printf("khong co so nguyen to");
    return 0;
}
