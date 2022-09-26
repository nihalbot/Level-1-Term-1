#include<stdio.h>

int main()
{
    int user_input;

    printf("Enter a number you want to test : ");
    scanf("%d", &user_input);

    if (user_input == 0)
    {
        printf("Zero!,\n");
        
    }

    if (user_input % 2 == 0){
        printf("Even Number\n");
    }
  
    else if (user_input % 2 != 0){
        printf("Odd Number\n");
    }
    
    else{
        printf("Enter a valid Input\n");
    }

    return 0;
}