#include<stdio.h>

int main()
{
    int m;

    printf("Enter m valu : ");
    scanf("%d", &m);

    if (m > 0){
        printf("n is 1\n");
    }
    else if (m == 0){
        printf("n is 0\n");
    }
    else if (m < 0){
        printf("n is -1\n");
    }

    else{
        printf("Input a valid number(0, 1, -1)\n");
    }

    return 0;
}