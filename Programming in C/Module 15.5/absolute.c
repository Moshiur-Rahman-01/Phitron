#include <stdio.h>
#include <math.h>
#include <stdlib.h>
void my_abs(int n){
    printf("%d", abs(n));
}
int main()
{
    int n;
    scanf("%d",&n);
    my_abs(n);
    return 0;
}