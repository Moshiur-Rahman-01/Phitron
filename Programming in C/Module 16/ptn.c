#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);

    int hash = 1;
    int space = n-1;
    int symbol=1;
    for (int i = 1; i <= n; i++)
    {
        for (int k = 1; k <= space; k++)
        {
            printf(" ");
        }
        for (int j = 1; j <= hash; j++)
        {
            if(symbol%2==1) printf("#");
            else printf("-");
        }
        printf("\n");
        hash += 2;
        space--;
        symbol++;
    }

    int hash1=(n-1)*2-1;
    int space1=1;
    for(int i=1; i<n; i++){
        for(int j=1; j<=space1; j++){
            printf(" ");
        }
        for(int k=1; k<=hash1; k++){
            if (symbol % 2 == 1)
                printf("#");
            else
                printf("-");
        }
        printf("\n");
        hash1 -= 2;
        space1++;
        symbol++;
    }
    return 0;
}