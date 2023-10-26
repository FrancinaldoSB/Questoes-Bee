#include <stdio.h>
#include <stdbool.h>

int isPrime(int number) {
    if (number <= 1) {
        return 0;
    }

    if (number <= 3) {
        return 1; 
    }

    if (number % 2 == 0 || number % 3 == 0) {
        return 0; 
    }

    for (int i = 5; i * i <= number; i += 6) {
        if (number % i == 0 || number % (i + 2) == 0) {
            return 0; 
        }
    }

    return 1; 
}

int main()
{
    int nums[10], num;
    for (int i = 0; i < 10; i++)
    {
        printf("Informe o %d numero: ", i + 1);
        scanf("%d", &nums[i]);
    }

    for (int i = 0; i < 10; i++)
    {
        num = nums[i];
        if (isPrime(num))
        {
            printf("%d e um numero primo.\n", num);
        }
    }

    return 0;
}