#include <stdio.h>
void loop(int a[],int size, int i)
{
    if (i == size)
    {
        return;
    }
    printf("%d\n", a[i]);
    loop(a,size,i+1);
}
int main()
{
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0; i<n; i++){
        scanf("%d",&a[i]);
    }
    loop(a,n,0);
    return 0;
}