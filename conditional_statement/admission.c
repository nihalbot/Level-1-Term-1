#include <stdio.h>

int main()
{
    int math, phy, che;
    int total, math_phy;

    printf("Enter your marks in Math : ");
    scanf("%d", &math);
    printf("Enter your marks in Physics : ");
    scanf("%d", &phy);
    printf("Enter your marks in Chemistry : ");
    scanf("%d", &che);

    if (math >= 65 && phy >= 55 && che >= 50)
    {
        total = (math + phy + che);
        math_phy = (math + phy);
    }

    if (total >= 190 || math_phy >= 140)

    {
        printf("\n");
        printf("\n");
        printf("Your total marks is : %d \n", total);
        printf("Your marks in Math & Physics is : %d \n", math_phy);
        printf("You are Eligble for addmission \n");
    }

    else
    {
        printf("You are not eligble for the admission \n");
    }

    return 0;
}