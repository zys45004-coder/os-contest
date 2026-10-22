#include <stdio.h>
int main(void)
{
    int value = 10;
    int *p = &value;
    printf("value = %d\n", value);
    printf("address of value = %p\n", (void *)&value);
    printf("address stored in p = %p\n", (void *)p);
    printf("value accessed through p = %d\n", *p);
    *p = 20;
    printf("after modification, value = %d\n", value);
    return 0;
}
