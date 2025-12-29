#include <stdio.h>
int main()
{
    int tc;
    scanf("%d", &tc);
    while (tc--)
    {
        int k;
        scanf("%d",&k);
        int start=0;
        for(int i=0; i<k; i++){
            start++;
            if(start%3==0){
                start++;
                if(start%10==3){
                    start++;
                }
            }
            else if(start%10==3){
                start++;
                if(start%3==0){
                    start++;
                }
            }
        }
        printf("%d\n",start);
    }
    
    return 0;
}

// #include <stdio.h>

// int main()
// {
//     int t;
//     scanf("%d", &t);

//     while (t--)
//     {
//         int k;
//         scanf("%d", &k);

//         int count = 0;
//         int x = 0;

//         while (count < k)
//         {
//             x++;
//             if (x % 3 != 0 && x % 10 != 3)
//             {
//                 count++;
//             }
//         }

//         printf("%d\n", x);
//     }

//     return 0;
// }
