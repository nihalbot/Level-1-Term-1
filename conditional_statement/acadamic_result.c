#include<stdio.h>

int main()
{
    int roll;
    char name[20];
    int phy, che, computer_app;
    int total;
    float percentage;

    printf("Enter Your Roll : ");
    scanf("%d", &roll);
    printf("Enter your name : ");
    scanf("%s", name);
    printf("Enter Your marks in Physics : ");
    scanf("%d", &phy);
    printf("Enter Your marks in Chemistry : ");
    scanf("%d", &che);
    printf("Enter Your marks in Computer Appliance : ");
    scanf("%d", &computer_app);

    printf("\n");
    printf("\n");

    total = (phy + che + computer_app);
    percentage = (float) (total / 3);

    printf("Your Roll : %d\n", roll);
    printf("Your Name : %s\n", name);
    printf("Total marks : %d\n", total);
    printf("Percentage : %0.2f\n", percentage);

    if (percentage >= 60 && percentage <= 100){
        printf("First Division\n");
    }
    else if (percentage >= 50 && percentage < 60){
        printf("Secound Division\n");
    }
    else if (percentage >= 40 && percentage < 50){
        printf("Third Division\n");
    }
    else {
        printf("Fail\n");
    }

    
    return 0;
}