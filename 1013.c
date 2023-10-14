#include <stdio.h>
 
int main() {
    int nums[2], maior;

    scanf("%d", &nums[0]);

    maior = nums[0];

    for (int i = 1; i < 3; i++)
    {
        scanf("%d", &nums[i]);

        if (nums[i] > maior)
        {
            maior = nums[i];
        }
    }

    printf("%d eh o maior\n", maior);
    
    
    return 0;
}