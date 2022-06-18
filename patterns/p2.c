#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    for (int i = 0; i <=(2 * n) - 1; i++)
    {
        if (i < n)
        {
            for (int j = 0; j <i; j++)
            {
                printf("* ");
            }
            printf("\n");
        }
        else
        {
            int p=i-n;
            for (int j = p; j < n; j++)
            {
                printf("* ");
            }
            printf("\n");
        }
    }
    printf("\n\n");
    //
    for (int i = 0; i <(2 * n) - 1; i++)
    {
        if (i < n)
        {
            for (int j = 0; j <i+1; j++)
            {
                printf("* ");
            }
            printf("\n");
        }
        else
        {
            int c=n-(i-n)-1;// n-(i-n+1)
            for (int j = 0; j < c; j++)
            {
                printf("* ");
            }
            printf("\n");
        }
        
    }
    return 0;
}

// output
// *
// **
// ***
// ****
// *****
// ****
// ***
// **
// *