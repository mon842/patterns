#include <stdio.h>

int main()
{
    // for (int i = 0; i < 5; i++)
    // {
    //     for (int j = i; j < 5; j++)
    //     {
    //         printf("* ");
    //     }
    //     printf("\n");
    // }
    // printf("\n\n");
    // int c=0;
    // for (int i = 0; i < 5; i++){
    //     c=5-i;
    //     for (int j = 0; j < c; j++)
    //     {
    //         printf("* ");
    //     }
    //     printf("\n");
    // }

    for (int i = 0; i <5; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}