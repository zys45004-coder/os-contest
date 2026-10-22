#include <stdio.h>
int main(void)
{
    int numbers[5] = {3, 7, 2, 9, 4};
    numbers[2] = 10;
    int sum = 0;
    for (int i = 0; i < 5; i++)
    {
        printf("numbers[%d] = %d\n", i, numbers[i]);
        sum = sum + numbers[i];
    }
    printf("Sum = %d\n", sum);
    return 0;
}
