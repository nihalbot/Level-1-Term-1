#include <stdio.h>

int main()
{
    int start_range, end_range;
    int number;

    printf("Enter start range : ");
    scanf("%d", &start_range);
    printf("Enter End range : ");
    scanf("%d", &end_range);

    for (int i = start_range; i <= end_range; i++)
    {
        for (int j = start_range; j <= i; j++)
        {
            if (i % j == 0)
            {
                number = i;
            }
            printf("%d\n", j);
        }
    }

    return 0;
}