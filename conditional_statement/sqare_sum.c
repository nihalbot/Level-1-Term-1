#include<stdio.h>

int main()
{
    int n, j, sum = 0;

    printf("Enter term : ");
    scanf("%d", &n);

    printf("The sqare natural upto %d terms are : ", n);
    for (int i = 0; i < n; i++){
        j = j + (2*i+1);
        sum += j;
        printf("%d ", j);
    }
    printf("\n");
    printf("The sum of Sqare Natural Number upto %d terms = %d\n", n, sum);

    return 0;
}