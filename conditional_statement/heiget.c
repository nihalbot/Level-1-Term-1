#include<stdio.h>

int main()
{
    float user_input;

    printf("Enter you Height : ");
    scanf("%f", &user_input);

    if (user_input < 150.00){
        printf("The person is Dwarf.\n");
    }
    else if (user_input == 150.00 || user_input < 165.00){
        printf("The person is Avarage Height. \n");
    }
    else if (user_input >= 165.00){
        printf("The person is Tall.\n");
    }

    return 0;
}