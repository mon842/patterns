// output
//     *
//    * *
//   *   *
//  *     *
// *********

#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    for (int i = 0; i < n-1; i++)
    {
        int c=(i*2)+1;
        for (int s = i; s < n-1; s++)
        {
            printf(" ");
        }
        for (int j = 0; j < c; j++)
        {
            
            if (j==0 || j==c-1)
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
            
        }
        printf("\n");
    }
    for (int i = 0; i < (n*2)-1; i++)
    {
        printf("*");
    }
    
    return 0;
}