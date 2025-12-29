#include <stdio.h>
#include<string.h>
int main()
{
    char a[101],b[101];
    scanf("%s %s", &a, &b);
    int value=strcmp(a,b);

    if(value<0){
        printf("A is smaller");
    }
    else if(value==0){
        printf("Equal");
    }
    else if(value>0){
        printf("B is smaller");
    }
    return 0;
}