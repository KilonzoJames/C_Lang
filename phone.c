#include <stdio.h>
#include <string.h>
#include <cs50.h>

typedef struct
{
    string name;
    string number;
}
person;

int main (void)
{
    person man [2];
    man[0].name = "James";
    man[0].number = "+254";
    man[1].name = "Mutio";
    man[1].number = "+255";

    string username = get_string("Enter you name: ");
    for(int i = 0; i < 2; i++)
    {
        if(strcmp(username, man[i].name) == 0)
        {
            printf("Found %s\n", man[i].number);
            return 0;
        }
    }
    printf("Not Found\n");
    return 1;
}
