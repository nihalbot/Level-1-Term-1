#include<stdio.h>

int main()
{
    int user_input;

    printf("Enter a year : ");
    scanf("%d", &user_input);

    if (user_input % 4 == 0){
        printf("Leap Year \n");
    }
    else if (user_input % 4 == 0 && user_input % 100 != 0){
        printf("Leap Year \n");
    }
    else if (user_input % 100 == 0 && user_input % 400 == 0) {
        printf("Leap Year \n");
    }

    else {
        printf("Not a Leap Year \n");
    }
    

    return 0;
}