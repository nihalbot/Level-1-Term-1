#include<stdio.h>

int main()
{
    char input;

    printf("Enter a key : ");
    scanf("%c", &input);

    if (input >= 'a' && input <= 'z' || input >= 'A' && input <= 'Z'){
        printf("%c is a Alphabate\n", input);
    }
    else if (input >= '0' && input <= '9'){
        printf("%c is a Digit\n", input);
    }
    else {
        printf("%c is a Special Chareter\n", input);
    }

    return 0;
}