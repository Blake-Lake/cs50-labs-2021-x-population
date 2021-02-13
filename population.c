#include <cs50.h>
#include <stdio.h>

int main(void)
{
    // Prompt for start size
    int start;
    do
    {
        start = get_int("Start Size: ");
    }
    while (start < 9);

    // Prompt for end size
    int end;
    do
    {
        end = get_int("End Size: ");
    }
    while (end < 9);

    int years = 0;
    do
    {
        start = start + start / 3 - start / 4;
        years++;
    }
    while(start != end);

    printf("Years: %i\n", years);
}