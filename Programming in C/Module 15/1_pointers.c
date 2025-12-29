#include <stdio.h>
int main()
{
    int x=10;
    printf("%d\n",x);
    printf("Address of Variable = %p\n",&x);

    int* ptr;
    ptr = &x; // Memory = 8 Byte
    printf("Address of Variable = %p\n", ptr);
    printf("Address of Pointer = %p\n", &ptr);
    printf("value of Pointer = %d\n", *ptr);

    *ptr = 200;
    printf("%d\n",x);
    return 0;
}
// value->address = reference
// address->value = dereference