#include <stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a[n],Psum=0,Nsum=0;
    for(int i=0; i<n; i++){
        scanf("%d", &a[i]);
        if(a[i]>0){
            Psum+=a[i];
        }
        else{
            Nsum+=a[i];
        }
    }
    printf("%d %d",Psum,Nsum);
    return 0;
}