// output
//     1
//    212
//   32123
//  4321234
// 543212345
//  4321234
//   32123
//    212
//     1

#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    int c = 0;
    int p = (2 * n) - 1, g = 0, x = 1,y=2;
    for (int i = 0; i < p; i++)
    {
        if (i < n)
        {
            c = (i * 2) + 1;
            g = n - i - 1;
            x = i + 1;
        }
        else
        {
            c = p - (2 * (i - n + 1));
            g = i - n + 1;
            x = n - g;
        }
        for (int s = 0; s < g; s++)
        {
            printf(" ");
        }
        y=2;
        for (int j = 0; j < c; j++)
        {
            
            if (j <= (c / 2))
            {
                printf("%d", x--);
            }
            else
            {
                printf("%d", y++);
            }
        }
        printf("\n");
    }
    return 0;
}