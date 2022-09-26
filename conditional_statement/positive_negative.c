#include<stdio.h>

int main()
{
    int user_input;

    printf("Enter a number : ");
    scanf("%d", &user_input);

    if (user_input < 0){
        printf("Negetive \n");
    }
    else if (user_input == 0){
        printf("Zero!\n");
    }
    else {
        printf("Positive Number\n");
    }

    return 0;
}