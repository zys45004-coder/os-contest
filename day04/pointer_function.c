#include <stdio.h>
void change_copy(int x)
{
    x = 99;
    printf("inside change_copy: x = %d\n", x);
}
void change_original(int *p) { *p = 99; }
int main(void)
{
    int value = 10;
    change_copy(value);
    printf("after change_copy: value = %d\n", value);
    change_original(&value);
    printf("after change_original: value = %d\n", value);
    return 0;
}
