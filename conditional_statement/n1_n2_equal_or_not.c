#include<stdio.h>

int main()
{
    int number1, number2;

    printf("Enter a number : ");
    scanf("%d", &number1);
    printf("Enter another number : ");
    scanf("%d", &number2);

    if (number1 == number2){
        printf("%d and %d are Equal\n", number1, number2);
    }
    else {
        printf("%d and %d are Not Equal!\n", number1, number2);
    }

    return 0;
}