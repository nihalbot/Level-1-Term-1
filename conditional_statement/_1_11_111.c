#include <stdio.h>
#include <math.h>

int main()
{
    int input, sum = 0;
    int k = 0;

    printf("Enter term : ");
    scanf("%d", &input);

    for (int i = 0; i < input; i++)
    {
        k = k + pow(10, i);
        sum += k;
        printf("%d", k);
    }

    printf("\n");
    printf("The sum is : %d\n", sum);

    return 0;
}