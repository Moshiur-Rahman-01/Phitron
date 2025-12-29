#include <stdio.h>
int main()
{
    int a,b,c,first,second,third;
    scanf("%d %d %d",&a,&b,&c);
    if(a<=b && a<=c){
        first = a;
        if (b <= c)
        {
            second = b;
            third = c;
        }
        else
        {
            second = c;
            third = b;
        }
    }
    else if(b<=a && b<=c){
        first = b;
        if (a <= c)
        {
            second = a;
            third = c;
        }
        else
        {
            second = c;
            third = a;
        }
    }
    else {
        first = c;
        if (a <= b){
            second = a;
            third = b;
        }
        else
        {
            second = b;
            third = a;
        }
    }
    printf("%d\n%d\n%d\n\n%d\n%d\n%d",first,second,third,a,b,c);
    return 0;
}