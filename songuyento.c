#include "songuyento.h"
#include "stdio.h"
#include "stdlib.h"

void insonguyento(int min, int max)
{
    int flag = 0;
    int count = 0;
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
}