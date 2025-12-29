// https://www.hackerrank.com/contests/introduction-to-c-programming-a-module-3-5-a-practice-day-2/challenges/variables-6-4
#include <stdio.h>
int main()
{
    int a;
    long long int b;
    float c;
    char d;
    scanf("%d %lld %f %c", &a,&b,&c,&d);
    printf("%d\n%lld\n%.2f\n%c\n", a,b,c,d);
    return 0;
}