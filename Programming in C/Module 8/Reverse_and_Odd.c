#include <stdio.h>
int main()
{
    int tc;
    scanf("%d", &tc);
    int arr[tc];
    for(int i=0; i<tc; i++){
        scanf("%d", &arr[i]);
    }
    for(int i=tc-1; i>0; i--){
        if(i%2==1) printf("%d ",arr[i]);
    }
    return 0;
}