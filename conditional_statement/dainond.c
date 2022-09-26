#include<stdio.h>

int main()
{
    int x = 1;
    for (int i = 1; i <= 6; i++){
        for (int j = 6; j >= i; j--){
            printf(" ");
        }

        for (int k = 1; k <= 2*i-1; k++){
            printf("* ");
        }
        
        printf("\n");
    }

    return 0;
}