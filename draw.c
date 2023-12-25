#include <stdio.h>
int right(void);

int main(void)
{
    right();
    int count = 7;
    for (int i = 0; count > i; i++)
    {
        for (int i = 0; count > i; i++)
        {
            printf("#");    
        }
        printf("\n");     
    }
}

int right(void)
{
    int n = 5;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < i; j++)
        {
            printf("a");
        }
         printf("\n"); 
        // Print middle spaces (excluding first and last row)
        // if (i > 0 && i <= n - 1)
        // {
        //     for (int j = 0; j < n - i - 2; j++) {
        //         printf("  ");
        //     }
        //     printf(" *");
        // }

    }
    
}