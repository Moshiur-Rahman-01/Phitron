#include <stdio.h>
#include<stdlib.h>
int main()
{
    int n;
    scanf("%d", &n);
    int a[n][n];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    
        int psum = 0,ssum=0;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if (i == j)
                {
                    psum+= a[i][j];
                }
                if(i+j==n-1){
                    ssum += a[i][j];
                }
            }
        }
        int result = abs(psum-ssum);
        printf("%d",result);
    
    return 0;
}