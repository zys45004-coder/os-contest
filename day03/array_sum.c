#include <stdio.h>
int sum_array(const int numbers[], int length)
{
    int sum = 0;
    for (int i = 0; i < length; i++) { sum = sum + numbers[i]; }
    return sum;
}
int main(void)
{
    int first[5] = {3, 7, 2, 9, 4};
    int second[3] = {10, 20, 30};
    int result1 = sum_array(first, 5);
    int result2 = sum_array(second, 3);
    printf("First sum = %d\n", result1);
    printf("Second sum = %d\n", result2);
    return 0;
}
