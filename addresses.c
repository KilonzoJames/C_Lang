#include <stdio.h>

int main(void)
{
    int n =50;
    int *p = &n;
    char *s = "Hi!";
    printf("%p\n", p);
    printf("%i\n", *p);
    printf("%c\n", s[0]);
    printf("%c\n", *s);
    printf("%c\n", *(s+1));
    printf("%s\n", (s));
    printf("%s\n", (s+1));
    printf("%p\n", s);
    printf("%p\n", &s[0]);
    printf("%p\n", &s[1]);
    printf("%p\n", &s[2]);
    printf("%p\n", &s[3]);

}