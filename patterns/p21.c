// output
// ABCDEEDCBA
// ABCD  DCBA
// ABC    CBA
// AB      BA
// A        A


#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    int x=65;
    int y=0;
    for (int i = 0; i < n; i++)
    {
        x=65;
        y=x+(n-i-1);
        for (int j = 0; j < n*2; j++)
        {
            if (j<n)
            {
                if (j<n-i)
                {
                    printf("%c",x++);
                }
                else
                {
                    printf(" ");
                }
                
            }
            else
            {
                if (j<=n+i-1)
                {
                    printf(" ");
                }
                else
                {
                    printf("%c",y--);
                }
                
            }
            
        }
        printf("\n");
    }

    return 0;
}