#include <stdio.h>
#include <string.h>
#include <cs50.h>
int comparestrings();

int main (void)
{
    comparestrings();
    int x = 200;
    int numbers[] = {20, 40, 10, 85, 110};
    for(int i = 0; i < 5; i++)
    {
        if (numbers[i] == x)
        {
            printf("Found\n");
            return 0;
        }
    }
    printf("Not Found\n");
    return 1;
}

int comparestrings()
{
    string nums_in_words[] = {"one", "two", "three", "four", "five"};
    string str = get_string("Type a num in words: ");

    for(int x = 0; x < 5; x++)
    {
        if (strcmp(nums_in_words[x], str) == 0)
        {
            printf("Num Found\n");
            return 0;
        }
    }
    printf("Num Not Found\n");
    return 1;
}


