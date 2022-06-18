// output
// **********
// ****  ****
// ***    ***
// **      **
// *        *
// *        *
// **      **
// ***    ***
// ****  ****
// **********


#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    for (int i = 0; i < n * 2; i++)
    {
        for (int j = 0; j < n * 2; j++)
        {
            if (i < n)
            {
                if (j < n)
                {
                    if (j < n - i) // 1st part
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

                    if (j <= n + i - 1) // 2nd part
                    {
                        printf(" ");
                    }
                    else
                    {
                        printf("*");
                    }
                }
            }
            else
            {
                if (j<n)// 3rd prt
                {
                    if (j<=i-n)
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
                    if (j>= (((2*n)-1)-i)+n)// 4th part
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