#include<stdio.h>

int main()
{
    int a, b, c;
    int totalValu;

    printf("Enter value of a : ");
    scanf("%d", &a);
    printf("Enter value of b : ");
    scanf("%d", &b);
    printf("Enter value of c : ");
    scanf("%d", &c);

    totalValu = (a + b + c);

    if (totalValu == 180){
        printf("The triangle is valid\n");
    }
    else {
        printf("Triangle is not valid!\n");
    }

    return 0;
}