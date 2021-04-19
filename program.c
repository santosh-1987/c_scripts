#include <stdio.h>
#include <math.h>
int main() {
    int i = 1234;
    int *address = &i;
    printf("0x%p\n", &i);
    printf("0x%p\n", address);
    printf("%d\n", *address);

    int a = 34;
    int *pointer = 0;
    pointer = &a;
    int b = *pointer;
    printf("0x%p\n", pointer);
    printf("%d\n", b);
    return 0;
}