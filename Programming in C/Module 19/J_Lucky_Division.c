#include <stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int original=n;
    int flag=1;
    while(n!=0){
        int rem = n%10;
        if(rem!=4 && rem!=7) {
            flag = 0;
            break;
        }
        n=n/10;
    }
    if (flag || original % 4 == 0 || original % 7 == 0 || original % 44 == 0 || original % 47 == 0 || original % 74 == 0 || original % 77 == 0)
        printf("YES");
    else printf("NO");
    return 0;
}