#include <stdio.h>
#include <stdlib.h>

int main ()
{
    // int x[3]; how to ask for an array automatically!
    // Manually =>
    int *x = malloc(3 * sizeof(int));     

    x[0] = 72;
    x[1] = 73;
    x[2] = 33;

    // Print the value at the memory location pointed to by x
    printf("%i\n", *x);

    // use valgrind ./memory to detect errors; i.e memory leaks, Invalid write of size 4
    free(x);
}