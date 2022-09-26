#include<stdio.h>

int main()
{
    int tempture;

    printf("Enter Tempeture : ");
    scanf("%d", &tempture);

    if (tempture < 0){
        printf("Freezing weather\n");
    }
    else if (tempture <= 10){
        printf("Very Cold Weather\n");
    }
    else if (tempture > 10 && tempture <= 20){
        printf("Cold Weather\n");
    }
    else if (tempture > 20 && tempture <= 30){
        printf("Normal Weather\n");
    }
    else if (tempture > 30 && tempture <= 40){
        printf("Hot Weather\n");
    }
    else if (tempture > 40){
        printf("Very Hot Weather\n");
    }

    return 0;
}