#include <stdio.h>
#include <string.h>
#include <stdlib.h>
// #include <cs50.h>

int main(int argc, char *argv[])
{
    char *s = get_string("");
    char *t = malloc(strlen(s) + 1);
    strcpy(t, s);
    // for (int i = 0, n = strlen(s) + 1; i <= n; i ++)
    // {
    //     t[i] = s[i];
    // }
    

    // Use strcmp to compare strings
    if (strcmp(s, t) == 0)
    {
        printf("Yes\n");
        printf("%p\n", s);
        printf("%p\n", t);
        return 0;
    }
    else
    {
        printf("No\n");
        printf("%p\n", s);
        printf("%p\n", t);
        return 1;
    }
    free(t);
}
