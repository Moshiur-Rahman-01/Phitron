#include <stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0; i<n; i++){
        scanf("%d",&a[i]);
    }
    int f,count=0;
    scanf("%d",&f);
    for (int i = 0; i < n; i++)
    {
        if(f==a[i]){
            printf("%d",i);
            count++;
            break;
        }
    }
    if(count==0) printf("-1");
    return 0;
}