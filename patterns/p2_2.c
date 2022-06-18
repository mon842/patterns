#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    for (int i = 0; i < (2*n); i++)
    {
        int c= i<n ? i : (2*n)-i;
        for (int j = 0; j < c; j++)
        {
            printf("* ");
        }
        printf("\n");
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