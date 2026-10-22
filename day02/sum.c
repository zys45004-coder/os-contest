#include <stdio.h>
int main(void)
{
    int sum = 0;
    for (int i = 1; i <= 10; i++) { sum = sum + i; }
    printf("Sum = %d\n", sum);
    if (sum == 55) { printf("PASS\n"); }
    else { printf("FAIL\n"); }
    return 0;
}
