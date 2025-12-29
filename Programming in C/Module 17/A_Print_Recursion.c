#include <stdio.h>
void test(int n){
    if(n==0) return;
    printf("I love Recursion\n");
    test(n-1);
}
int main()
{
    int n;
    scanf("%d",&n);
    test(n);
    return 0;
}