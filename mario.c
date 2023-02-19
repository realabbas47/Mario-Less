#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int hait = 0;

    // Getting hight value from user while making sure its
    // greater than 1 and less than 8.
    do
    {
        printf("Height: ");
        scanf("%i", &hait);
    }
    while (hait < 1 || hait > 8);

    // Print result
    for (int x = 1; x <= hait; x++)
    {
        // Alling
        for (int k = (hait - x); k != 0; k--)
        {
            printf(" ");
        }
        // printing #
        for (int i = 1; i <= x; i++)
        {
            printf("#");
        }
        printf("\n");
    }
}