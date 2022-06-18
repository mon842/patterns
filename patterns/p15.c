// output
// **********
// ****  ****
// ***    ***
// **      **
// *        *


#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n*2; j++)
        {
            if (j<n)
            {
                if (j<n-i)
                {
                    printf("*");
                }
                else
                {
                    printf(" ");
                }
                
            }
            else
            {
                
                if (j<=n+i-1)
                {
                    printf(" ");
                }
                else
                {
                    printf("*");
                }
                
            }
            
        }
        printf("\n");
    }

    return 0;
}