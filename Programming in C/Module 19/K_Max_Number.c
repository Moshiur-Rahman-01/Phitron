#include <stdio.h>
#include <limits.h>
int maximum(int a[],int n,int i,int max){
    if(n==i) return max;
    if(max<a[i]) max=a[i];
    maximum(a,n,i+1,max);
}
int main()
{
    int n;
    int max = INT_MIN;
    scanf("%d",&n);
    int a[n];
    for(int i=0; i<n; i++){
        scanf("%d",&a[i]);
    }
    int result = maximum(a,n,0,max);
    printf("%d",result);
    return 0;
}