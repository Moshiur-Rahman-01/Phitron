// https://www.hackerrank.com/contests/introduction-to-c-programming-a-module-3-5-a-practice-day-2/challenges/divisible-by-5-or-not
#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    for(int i=1; i<=n; i++){
        if(i%5==0){
            printf("%d Yes\n",i);
        }
        else{
            printf("%d No\n",i);
        }
    }
    return 0;
}