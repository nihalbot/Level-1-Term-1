#include <stdio.h>

int main()
{
    int a, b, c;

    printf("Enter degree of a angle : ");
    scanf("%d", &a);
    printf("Enter degree of b angle : ");
    scanf("%d", &b);
    printf("Enter degree of c angle : ");
    scanf("%d", &c);

    if (a == b && b == c ){
        printf("Equilateral triangle\n");
    }
    else if (a == b || b == a || a == c || b == c || c == a || c == b){
        printf("Isosceles Tringle\n");
    }
    else if (a != b || b != c){
        printf("Scalene Tringle\n");
    }
    else {
        printf("Invlaid input\n");
    }


    return 0;
}