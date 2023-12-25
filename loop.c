#include <stdio.h>
#include <stdbool.h>

int calculator(void);
float division(void);
int forloop(void);
int meow();

int main(void)
{
    calculator();
    division();
    forloop();
    meow();
    // int n;
    // do 
    // {
    //     n = get_int("Size: ")
    // }
    // while n < 0;
    const int n = 5;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("#");
        }
        printf("\n");
    }
}

int calculator(void)
{
    long x =2000000000;
    long y =2000000000;
    printf("%li\n", x + y);
}

float division(void)
{
    double z = (double) 1 /(double) 3;
    printf("%.20f\n", z);
}

int forloop(void)
{
    for (int i = 0; i < 4; i++)
    {
        printf("wazi")  ;
    }
    printf("\n");
}

int meow() 
{
    int counter = 3;

    // while (counter > 0) {
    //     printf("meow\n");
    //     counter--;  
    // }
    for (int i = 0; i < 3; i++){
        printf("meow\n");
    }

    return 0;
}