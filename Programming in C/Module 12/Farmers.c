#include <stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    for(int i=0; i<n; i++){
        double m1,m2,d;
        scanf("%lf %lf %lf",&m1,&m2,&d);
        double result1 = (m1*d)/(m1+m2);
        double result2 = d-result1;
        double dif = result2- (int)result2;
        // printf("%f",finalResult);
        if(dif<.0000001) printf("%d\n",(int)result2);
        else printf("%d\n",(int)result2+1);
    }
    return 0;
}