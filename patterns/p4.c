// output
// *****
//  ****
//   ***
//    **
//     *

#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        int c=n-i;
        for (int s = 0; s < i; s++)
        {
            printf(" ");
        }
        for (int j = 0; j < c; j++)
        {
            printf("* ");
        }
        printf("\n");
    }
    

    return 0;
}

