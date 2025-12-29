#include <stdio.h>
int main()
{
    int a[5] = {10,20,30,40,50};
    *a = 100;
    *(a+1) = 200;
    for(int i=0; i<5; i++){
        printf("%d\n",a[i]);
        printf("Array er %dth index er address: %p\n",i,&a[i]);
        printf("Array er nam: %p\n",a);
        printf("Array er 1st value: %d\n",*a);
    }
    return 0;
}