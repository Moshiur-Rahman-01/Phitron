#include <stdio.h>
#include<limits.h>
void minimum(int a[],int n){
    int min = INT_MAX;
    for(int i=0; i<n; i++){
        if(min>a[i]) min=a[i];
    }
    printf("%d ",min);
}
void maximum(int a[], int n)
{
    int max = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        if (max < a[i])
            max = a[i];
    }
    printf("%d", max);
}
int main()
{
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0; i<n; i++){
        scanf("%d",&a[i]);
    }
    minimum(a,n);
    maximum(a,n);
    return 0;
}