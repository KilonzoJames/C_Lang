#include <stdio.h>
#include <string.h>
float average(int array[]);
int N = 5;

int main()
{
    char c1 = 'h';
    char c2 = 'i';
    char c3 = '!';
    // Array of integers
    int scores[] = {72, 73, 33, 366,6};

    printf("%i %i %i\n", c1, c2, c3);
    printf("Average: %f\n", average(scores));
}
float average(int array[])
{
    int sum = 0;
    for (int i = 0; i < N; i++)
    {
        sum += array[i];
    }
    return (float) sum /  N;
}
// #include <stdio.h>
// #include <cs50.h>

// int main()
// {
//     int n = 0;
//     string s = get_string("What's your name? ");
//     while (s[n] != '\0')
//     {
//         n++;
//     }
//     printf("%i\n", n);
// }

