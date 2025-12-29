#include <stdio.h>
void summation(int a[],int n, int i,long long int sum){
    if(i==n){
        printf("%lld", sum);
        return;
    } 
    sum+=a[i];
    summation(a,n,i+1,sum);
}
int main()
{
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0; i<n; i++){
        scanf("%d", &a[i]);
    }
    summation(a,n,0,0);
    return 0;
}