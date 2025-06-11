#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    int i;      // Loop counter to test potential factors
    int number; // The number we want to factorize

    // Check if exactly one argument was passed (plus program name)
    if (argc == 2)
    {
        i = 1;                  // Start checking from factor 2 (will be incremented)
        number = atoi(argv[1]); // Convert string argument to integer

        // Special case: if input is 1, just print "1"
        if (number == 1)
            printf("1");

        // Keep looking for factors while i is smaller than remaining number
        while (number >= ++i) // Pre-increment: i becomes 2, 3, 4, etc.
        {
            // Check if i divides number evenly (i is a factor)
            if (number % i == 0)
            {
                printf("%d", i); // Print the factor we found

                // If number equals i, we found the last factor
                if (number == i)
                    break;

                printf("*"); // Print separator between factors
                number /= i; // Divide out this factor from number
                i = 1;       // Reset i to 1 (will become 2 next loop)
            }
        }
    }
    printf("\n"); // Always print newline at the end
    return (0);
}