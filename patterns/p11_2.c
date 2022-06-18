// output
//     *
//    * *
//   *   *
//  *     *
// *        *
//  *     *
//   *   *
//    * *
//     * 


#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    int c=0;
    int p=(2*n)-1,g=0;
    for (int i = 0; i < p; i++)
    {
        if (i<n)
        {
            c=(i*2)+1;
            g=n-i-1;
        }
        else
        {
            c=p-(2*(i-n+1));
            g=i-n+1;
        }
        for (int s = 0; s <g; s++)
        {
            printf(" ");
        }
        
        for (int j = 0; j < c; j++)
        {
            if (j==0 || j==c-1)
            {
                printf("*");
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