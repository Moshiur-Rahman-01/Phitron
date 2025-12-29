#include <stdio.h>
#include<limits.h>
int main()
{
    int n;
    scanf("%d", &n);
    int a[n];
    int min = INT_MAX;
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&a[i]);
    }
    for (int i = 0; i < n; i++)
    {
        if(min>a[i]){
            min = a[i];
        }
    }
    for (int i = 0; i < n; i++)
    {
        if(min==a[i]){
            printf("%d %d", min, i + 1);
            break;
        }
    }
    return 0;
}