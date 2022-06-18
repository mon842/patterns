// output

//     *
//    * *
//  *     *
// *********
#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        int c=(2*n)-1;
        for (int s = 0; s < i; s++)
        {
            printf(" ");
        }
        for (int j = c; j>= (2*(i+1))-1; j--)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}