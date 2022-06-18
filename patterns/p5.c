// output
//     *
//    ***
//   *****
//  *******
// *********

#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        int c=(2*(i+1))-1;
        for (int s = i; s < n; s++)
        {
            printf(" ");
        }
        for (int j = 0; j < c; j++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}