// output
// ****
// *  *
// *  *
// *  *
// ****

#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    int m=n-1;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (j==0 && i<n)
            {
                printf("#");
            }
            else if (i==0 && j<m)
            {
                printf("#");
            }
            else if (i<n && j==m-1)
            {
                printf("#");
            }
            else if (j<m && i==n-1)
            {
                printf("#");
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