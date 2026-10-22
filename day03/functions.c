#include <stdio.h>
int sum_to(int n)
{
    int sum = 0;
    for (int i = 1; i <= n; i++) { sum = sum + i; }
    return sum;
}
int main(void)
{
    int result10 = sum_to(10);
    int result100 = sum_to(100);
    printf("1 to 10: %d\n", result10);
    printf("1 to 100: %d\n", result100);
    printf("1 to 5: %d\n", sum_to(5));
    return 0;
}
