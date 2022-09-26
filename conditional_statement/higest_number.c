#include<stdio.h>

int main()
{
    int num1, num2, num3;

    printf("Enter 1st number : ");
    scanf("%d", &num1);
    printf("Enter 2nd number : ");
    scanf("%d", &num2);
    printf("Enter 3rd number : ");
    scanf("%d", &num3);

    if (num1 > num2 && num1 > num3){
        printf("1st number is Biggest\n");
    }
    else if (num2 > num1 && num2 > num3){
        printf("2nd number is biggest\n");
    }
    else if (num3 > num1 && num3 > num2){
        printf("3rd number is Biggest\n");
    }
    else {
        printf("Number are Equal\n");
    }

    return 0;
}