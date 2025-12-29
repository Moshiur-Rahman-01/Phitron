#include <stdio.h>
#include<stdlib.h>
#include<limits.h>
int main()
{
    int n,a;
    scanf("%d", &n);
    int minvalue = INT_MAX;
    for(int i=0; i<n; i++){
        scanf("%d",&a);
        a=abs(a);
        if(a<minvalue){
            minvalue = a;
        }

    }
    printf("%d",minvalue);
    return 0;
}