#include <stdio.h>
void loop(int i){
    // int n;
    // scanf("%d",&n);
    if(i==6){
        return;
    }
    printf("%d\n",i);
    loop(i+1);
}
int main()
{
    int i=1;
    loop(i);
    return 0;
}