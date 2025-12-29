#include <stdio.h>
#include<stdlib.h>
int main()
{
    long long int n,sum=0;
    scanf("%lld",&n);
    long long int a[n];
    for(int i=0; i<n; i++){
        scanf("%lld", &a[i]);
        sum+=a[i];
    }
    sum = llabs(sum);
    printf("%lld",sum);
    return 0;
}