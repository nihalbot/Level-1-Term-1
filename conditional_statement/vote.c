#include<stdio.h>

int main()
{
    int user_input;

    printf("Enter your age : ");
    scanf("%d", &user_input);

    if (user_input > 18 && user_input <=100){
        printf("You can vote \n");
    }
    else{
        printf("You can't vote! \n");
    }

    return 0;
}