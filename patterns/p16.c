// output
// *        *
// **      **
// ***    ***
// ****  ****
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
    for (int i = 0; i < n * 2-1; i++)
    {
        for (int j = 0; j < n * 2; j++)
        {
            if (i < n)
            {
                if (j < n)
                {
                    if (j <= i) // 1st part
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
                    if (j >= (2 * n) - i - 1) // 2nd part
                    {
                        printf("*");
                    }
                    else
                    {
                        printf(" ");
                    }
                }
            }
            else
            {
                if (j < n)
                {
                    if (j<(2*n)-i-1)
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
                    if (j>=i+1)
                    {
                        printf("*");
                    }
                    else
                    {
                        printf(" ");
                    }
                    
                }
            }
        }
        printf("\n");
    }

    return 0;
}