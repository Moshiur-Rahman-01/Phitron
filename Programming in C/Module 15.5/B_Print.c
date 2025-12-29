#include <stdio.h>
void f(int n){
    for(int i=1; i<=n; i++){
        if(i>1) printf(" ");
        printf("%d",i);
    }
}
int main()
{
    int n;
    scanf("%d",&n);
    f(n);
    return 0;
}