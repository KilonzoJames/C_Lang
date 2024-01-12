#include <stdio.h>

int main(void)
{
    int n =50;
    int *p = &n;
    char *s = "Hi!";

    printf("%p\n", &n);
    printf("%p\n", p);
    printf("%i\n", *p);
    printf("%s\n", s);
    printf("%p\n", s);
    printf("%p\n", &s[0]);
    printf("%p\n", &s[1]);
    printf("%p\n", &s[2]);
    printf("%p\n", &s[3]);
    // Pointer arithmetic
    printf("%s\n", (s+1)); // The printf statement prints the string starting from the character 'i' to the end. *substrings
    printf("%c\n", s[0]);
    printf("%c\n", *s); /*Go to the character in "s". De-reference the pointer*/
    printf("%c\n", *(s+1));
    printf("%c\n", *&s[1]);

}