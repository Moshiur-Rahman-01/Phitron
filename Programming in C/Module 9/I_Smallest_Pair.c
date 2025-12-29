#include <stdio.h>
#include<limits.h>
int main()
{
    int n;
    scanf("%d",&n);
    while(n--){
        int t;
        scanf("%d",&t);
        int a[t];
        for(int i=0; i<t; i++){
            scanf("%d",&a[i]);
        }
        int min = INT_MAX;
        int sum=0;
        for(int i=0; i<t; i++){
            for(int j=i+1; j<t; j++){
                sum=a[i]+a[j]+j-i;
                if(min>sum) min=sum;
                // printf("%d ",sum);
            }
        }
        printf("%d\n",min);
    }

    return 0;
}