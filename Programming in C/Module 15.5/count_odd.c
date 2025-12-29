#include <stdio.h>
int count_odd(int a[], int size){
    int count=0;
    for(int i=0; i<size; i++){
        if(a[i]%2==1) count++;
        // printf("%d ",a[i]);
    }
    return count;
}
int main()
{
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0; i<n; i++){
        scanf("%d",&a[i]);
    }
    int count = count_odd(a,n);
    printf("%d",count);
    return 0;
}