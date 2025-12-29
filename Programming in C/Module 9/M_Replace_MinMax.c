#include <stdio.h>
#include<limits.h>
int main()
{
    int n;
    int min= INT_MAX;
    int max= INT_MIN;
    scanf("%d",&n);
    int a[n];
    for(int i=0; i<n; i++){
        scanf("%d",&a[i]);
    }
    for(int i=0; i<n; i++){
        if(min>a[i]){
            min=a[i];
        }
        if(max<a[i]){
            max=a[i];
        }
    }
    for(int i=0; i<n; i++){
        if(min==a[i]){
            printf("%d ",max);
        }
        else if(max==a[i]){
            printf("%d ",min);
        }
        else printf("%d ",a[i]);
    }
    return 0;
}