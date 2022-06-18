// output
//     *
//    * *
//   *   *
//  *     *
// *        *
//  *     *
//   *   *
//    * *
//     * 

#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        int c=(i*2)+1;
        for (int s = i; s < n; s++)
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
    for (int i = 1; i < n; i++)
    {
        int c=(n*2)-1;
        for (int s = 0; s <=i; s++)
        {
            printf(" ");
        }
        for (int j = 0; j < c-(2*i); j++)
        {
            
            if (j==0 || j==c-(2*i)-1)
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
    
    return 0;
}