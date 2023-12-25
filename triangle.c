#include <stdio.h>
#include <stdbool.h>

bool valid_triangle(float x, float y, float z);

bool valid_triangle(float x, float y, float z)
{
    // check that all sides are positive
    if (x <= 0 || y <= 0 || z <= 0)
    {
        return false;
    }
    // check that no two sides are less than a third side
    if ((x+y<=z) || (x+z<=y) || (y+z<=x))
    {
        return false;
    }
    // Add a return statement for the case when the triangle is valid
    return true;
}

int main()
{
    bool a;  // Declare the variable 'a'

    // Call the valid_triangle function with specific values
    a = valid_triangle(2, 0, 3);   
    if (a == true)  // Use 'a' directly, no need to compare with true
    {
        printf("The triangle is valid.\n");
    }
    else
    {
        printf("The triangle is not valid.\n");
    }

    return 0;
}