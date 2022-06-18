// output

// * * * * *
//  * * * *
//   * * *
//    * *
//     *
//     *
//    * *
//   * * *
//  * * * *
// * * * * *
#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    int p = (2 * n);
    for (int i = 0; i < p; i++)
    {
        if (i < n)
        {
            for (int s = 0; s < i; s++)
            {
                printf(" ");
            }
            for (int j = 0; j < n - i; j++)
            {
                printf("* ");
            }
            printf("\n");
        }
        else
        {
            for (int s = i-n+1; s < n; s++)
            {
                printf(" ");
            }
            for (int j = 0; j <=i-n ; j++)
            {
                printf("* ");
            }
            printf("\n");
        }
    }
    return 0;
}