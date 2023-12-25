#include <stdio.h>
#include <cs50.h>
int factorial(int);

int main(void)
{
    int number = get_int("Enter a number: ");
    int factor = factorial(number);
    printf("%i\n", factor);

}

int factorial(int n)
{
    if (n == 1)
    {
        return 1;
    }
    else
    {
       return n * factorial((n-1));
    }
    // int solution = n;
    // for (int j = n-1; j >= 1; j--)
    // {
    //     solution *= j;
    // }
    // return solution;
}
