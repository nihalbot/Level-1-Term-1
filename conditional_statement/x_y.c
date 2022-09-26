#include<stdio.h>

int main()
{
    int x, y;

    printf("Enter value of X : ");
    scanf("%d", &x);
    printf("Enter value of Y : ");
    scanf("%d", &y);

    if (x > 0 && y > 0){
        printf("The coordinate point (%d,%d) lies in the First Quadrant.\n", x, y);
    }
    else if (x < 0 && y >= 0){
        printf("The coordinate point (%d,%d) lies in the Secound quadrant.\n", x, y);
    }
    else if (x < 0 && y < 0){
        printf("The coordinate point (%d,%d) lies in the Third quadrant.\n", x, y);
    }
    else if (x >= 0 && y < 0){
        printf("The coordinate point (%d,%d) lies in the Fourth quadrant.\n", x, y);
    }
    else if (x == 0 && y == 0){
        printf("The coordinate point (%d,%d) lies in the origin\n", x, y);
    }
    else {
        printf("Invalid Input!\n");
    }

    return 0;
}