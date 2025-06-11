#include <stdio.h>

int ft_atoi_base(const char *str, int str_base)
{
    int result = 0; // Final result to return
    int sign = 1;   // Sign of the number (1 for positive, -1 for negative)
    int digit;      // Current digit value

    // Handle invalid inputs - return 0 for NULL pointer or invalid base
    if (str == NULL || str_base < 2 || str_base > 16)
        return 0;

    // Skip leading whitespaces (space, tab, newline, etc.)
    // This handles inputs like "   123" or "\t\n  -1A"
    while (*str == ' ' || (*str >= 9 && *str <= 13))
        str++;

    // Handle optional '+' sign (some grademe tests might include this)
    // Move past '+' but don't change sign (stays positive)
    if (*str == '+')
        str++;

    // Check for negative sign - must come after whitespace and optional '+'
    // Only process '-' if it's at current position after skipping whitespace/+
    if (*str == '-')
    {
        sign = -1; // Set negative sign
        str++;     // Move past the '-' character
    }

    // Process each character until end of string or invalid character
    while (*str)
    {
        // Convert uppercase to lowercase for consistent processing
        // This handles both 'A'-'F' and 'a'-'f' the same way
        char c = *str;
        if (c >= 'A' && c <= 'Z')
            c = c + ('a' - 'A'); // Convert 'A' to 'a', 'B' to 'b', etc.

        // Check if character is a valid digit (0-9) for this base
        // Example: base 8 only accepts '0'-'7', base 10 accepts '0'-'9'
        if (c >= '0' && c <= '9' && (c - '0') < str_base)
            digit = c - '0'; // Convert '0' to 0, '1' to 1, etc.

        // Check if character is a valid letter (a-f) for this base
        // Example: base 16 accepts 'a'-'f', base 12 accepts 'a'-'b'
        else if (c >= 'a' && c <= 'f' && (c - 'a' + 10) < str_base)
            digit = c - 'a' + 10; // Convert 'a' to 10, 'b' to 11, etc.

        // Invalid character found - stop conversion here
        // This handles cases like "1G" in base 16 (stops at 'G' and returns 1)
        else
            break;

        // Build the result: multiply current result by base and add new digit
        // Example: "123" in base 10: 0*10+1=1, 1*10+2=12, 12*10+3=123
        result = result * str_base + digit;

        str++; // Move to next character
    }

    // Apply the sign and return final result
    return result * sign;
}

int main(void)
{
    // Test cases to verify functionality
    printf("Base 10: %d\n", ft_atoi_base("123", 10));            // 123
    printf("Base 15: %d\n", ft_atoi_base("1A3", 15));            // 378
    printf("Base 2: %d\n", ft_atoi_base("1100", 2));             // 12
    printf("Base 8: %d\n", ft_atoi_base("17", 8));               // 15
    printf("Base 16 (negative): %d\n", ft_atoi_base("-1F", 16)); // -31
    printf("Invalid character: %d\n", ft_atoi_base("1G", 16));   // 1
    printf("Base 4: %d\n", ft_atoi_base("123", 4));              // 27

    // Additional test cases for whitespace and '+' handling
    printf("With spaces: %d\n", ft_atoi_base("   123", 10)); // 123
    printf("With + sign: %d\n", ft_atoi_base("+1A", 16));    // 26
    printf("Spaces and -: %d\n", ft_atoi_base("  -1F", 16)); // -31

    return 0;
}