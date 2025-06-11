#include <stdio.h>
#include <stdlib.h>

char *ft_itoa(int nbr)
{
    // Handle INT_MIN edge case (can't convert -(-2147483648) safely)
    if (nbr == -2147483648)
        return ("-2147483648\0");

    // Calculate length of string needed
    int n = nbr; // Copy to avoid modifying original
    int len = 0;
    if (nbr <= 0) // Count space for '-' (negative) or just '0' (zero)
        len++;
    while (n) // Count digits by dividing by 10
    {
        n /= 10;
        len++;
    }

    // Allocate memory for string (length + null terminator)
    char *result = (char *)malloc(sizeof(char) * (len + 1));
    if (result == NULL) // Check if malloc failed
        return NULL;
    result[len] = '\0'; // Set null terminator

    // Special case: if number is 0
    if (nbr == 0)
    {
        result[0] = '0';
        return (result);
    }

    // Handle negative numbers
    if (nbr < 0)
    {
        result[0] = '-'; // Put minus sign at start
        nbr = -nbr;      // Make positive for digit extraction
    }

    // Fill string from right to left with digits
    while (nbr)
    {
        result[--len] = nbr % 10 + '0'; // Get last digit, convert to char
        nbr /= 10;                      // Remove last digit
    }
    return result;
}