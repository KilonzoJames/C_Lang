#include <stdio.h>
#include <cs50.h>

int main(void)
{
    // TODO: Prompt for start size
    int start;
    do
    {
        start = get_int("Start size: ");
    }
    while (start < 9);

    // TODO: Prompt for end size
    int end;
    do
    {
        end = get_int("End size: ");
    }
    while (end < start);
    // TODO: Calculate number of years until we reach threshold
    int years = 0;
    // TODO: Print number of years
    while (start < end)
    {
        start += start/12;
        // start += start/3;
        // start += start/4;
        years ++;
    }
    printf("Years: %i\n", years);
}
