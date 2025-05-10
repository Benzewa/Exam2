#include <stdio.h>  // For printf
#include <stdlib.h> // For malloc and free

// Returns the absolute value of an integer
int ft_abs(int n)
{
    if (n < 0)     // If n is negative
        return -n; // Return its positive counterpart
    return n;      // If already positive, return as is
}

// Creates a reverse range of integers from 'end' to 'start'
int *ft_rrange(int start, int end)
{
    int i = 0;                       // Iterator variable
    int l = ft_abs(end - start) + 1; // Calculate length of the range (inclusive)
    int *p = malloc(l * sizeof(*p)); // Allocate memory for the range

    if (!p)          // Check if memory allocation failed
        return NULL; // Return NULL if allocation failed

    while (l > i) // Fill array until all positions are filled
    {
        p[i] = end;      // Assign current value of end to the array
        if (end > start) // If end is greater, decrement to move toward start
            end--;
        else // If end is less or equal, increment to move toward start
            end++;
        i++; // Move to next index
    }
    return (p); // Return the pointer to the filled array
}

int main()
{
    int start = -1; // Define starting point
    int end = 2;    // Define ending point

    int *range = ft_rrange(start, end);   // Create reversed range from end to start
    int length = ft_abs(end - start) + 1; // Calculate how many elements are in the range

    for (int i = 0; i < length; i++) // Loop through the range
        printf("%d\n", range[i]);    // Print each element in the range

    free(range); // Free the allocated memory
    return 0;    // Indicate successful execution
}
