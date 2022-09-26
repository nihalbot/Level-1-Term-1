#include<stdio.h>

int main()
{
    int input;
    int sum = 0;

    printf("Enter number : ");
    scanf("%d", &input);

    printf("The positive divisorr : ");
    for (int i = 1; i < input; i++){
        if (input % i == 0){
            printf("%d ", i);
            sum += i;
        }
    }

    printf("\n");
    printf("%d\n", sum);

    return 0;
}