#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *list = malloc(3 * sizeof(int));
    if (list == NULL)
    {
        return 1;
    }
    
    list[0] = 1;
    list[1] = 2;
    list[2] = 3;

    for(int i = 0; i < 3; i++)
    {
        printf("%i\n", list[i]);
    }
    // Don't forget to free the allocated memory when done
    free(list);
}   