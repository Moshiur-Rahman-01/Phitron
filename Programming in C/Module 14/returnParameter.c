#include <stdio.h>
int sum(int a, int b){
    printf("%d + %d = ",a,b);
    int ans = a+b;
    return ans;
}
int main()
{
    int a,b;
    scanf("%d %d",&a,&b);
    int result = sum(a,b);
    printf("%d",result);
    return 0;
}