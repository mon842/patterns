// output
//     1
//    212
//   32123
//  4321234
// 543212345

#include <stdio.h>

int main()
{
    int n;
    int t=2;
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        for (int s = 0; s < n-i; s++)
        {
            printf(" ");
        }
        int h=i;
        t=2;
        for (int j = 0; j < (i*2)-1; j++)
        {
            // printf();
            if (j<i)
            {
                printf("%d",h--);
            }
            else
            {
                printf("%d",t++);
            }
            
        }
        printf("\n");
    }
    return 0;
}