// output
//     1
//    1 1
//   1 2 1
//  1 3 3 1
// 1 4 6 4 1 

#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    int f=1;
    for (int i = 0; i < n; i++)
    {
        f=1;
        for (int s = 0; s < n-i; s++)
        {
            printf(" ");
        }
    
        for (int j = 0; j <= i; j++)
        {
            if (j==0 || j==i)
            {
                printf("%d ",f);
            }
            else
            {
                int d=i;
                printf("%d ",d);
            }
            
        }
        printf("\n");
    }
    

    return 0;
}

