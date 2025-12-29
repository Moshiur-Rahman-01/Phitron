#include <stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    long long int m,a,b,c;
    for(int i=0; i<t; i++){
        scanf("%lld %lld %lld %lld",&m,&a,&b,&c);
        long long int temp = a*b*c;
        if(m==0) printf("0\n");
        else if(m%temp==0){
            printf("%lld\n",m/temp);
        }
        else printf("-1\n");
    }
    return 0;
}