#include <stdio.h>
// #include <cs50.h>
void loop(void);
void forloop();

int main(void)
{
    loop();
    forloop();
    // string name = get_string("What's your name? ");
    // int age = get_int("What's your age? ");
    // string phone = get_string("What's your phone number? ");

    // printf("My name is %s. My age is %i. My number is %s.", name, age, phone);
}

void loop(void)
{
    int i = 0;
    while (i < 10)
    {
        printf("%i\n", i);
        i++;
    }
}
void forloop()
{
    for ( int j = 4; j < 11; j++)
    {
        printf("%i\n", j);
    }
}