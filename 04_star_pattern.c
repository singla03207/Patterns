#include <stdio.h>

int main()
{
    for (int i = 0; i < 6; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            printf("*");
        }
        for (int j = 5; j > i; j--)
        {
            printf(" ");
        }
        for (int j = 6; j < 11 - i; j++)
        {
            printf(" ");
        }
        for (int j = 10; j > 10 - i; j--)
        {
            printf("*");
        }

        printf("\n");
    }

    return 0;
}
