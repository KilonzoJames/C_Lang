#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char *a = "Nanny";
    char *f = "B";
    char *b = "Nanny";

    if (strcmp(a,f) == 0)
    {
        printf("Same\n");
    }else
    {
        printf("Different\n");
    }
}