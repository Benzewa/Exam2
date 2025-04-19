#include <stdio.h>

// Converts uppercase characters to lowercase
char to_lower(char c)
{
    if (c >= 'A' && c <= 'Z')     // Check if c is an uppercase letter
        return (c + ('a' - 'A')); // Convert to lowercase by adding the difference between 'a' and 'A'
    return (c);                   // If it's not an uppercase letter, return it as is
}

// Converts a character to a numeric digit if valid for the given base
int get_digit(char c, int digits_in_base)
{
    int max_digit;

    // Calculate the maximum valid digit for the given base
    if (digits_in_base <= 10)
        max_digit = digits_in_base - 1 + '0'; // For bases 2-10, max digit is a number ('0' to '9')
    else
        max_digit = digits_in_base - 10 - 1 + 'a'; // For bases 11-16, max digit is a letter ('a' to 'f')

    // If the character is a valid number between '0' and '9' within the base range
    if (c >= '0' && c <= '9' && c <= max_digit)
        return (c - '0'); // Convert character to corresponding integer digit

    // If the character is a valid letter between 'a' and 'f' within the base range
    else if (c >= 'a' && c <= 'f' && c <= max_digit)
        return (10 + c - 'a'); // Convert 'a'-'f' to digits 10-15

    // If the character is invalid for the given base
    else
        return (-1); // Return -1 to indicate an invalid character
}

// Converts a string to an integer using the given base
int ft_atoi_base(const char *str, int str_base)
{
    int result = 0; // The result of the conversion
    int sign = 1;   // The sign of the result (positive by default)
    int digit;      // To store the numeric value of each character

    // Validate input: check if the string is NULL or the base is out of range (2-16)
    if (str == NULL || str_base < 2 || str_base > 16)
        return 0; // Return 0 if input is invalid

    // Check for a negative sign at the beginning of the string
    if (*str == '-')
    {
        sign = -1; // Set sign to negative
        ++str;     // Move the pointer to the next character
    }

    // Loop through the string until we reach the null-terminator
    while (*str)
    {
        // Convert the character to lowercase and get its numeric digit
        digit = get_digit(to_lower(*str), str_base);

        // If the digit is invalid, stop processing
        if (digit == -1)
            break;

        // Build the result by multiplying the current result by the base and adding the current digit
        result = result * str_base + digit;
        ++str; // Move to the next character in the string
    }

    // Return the result multiplied by the sign (to handle negative numbers)
    return (result * sign);
}

int main(void)
{
    // Test cases to validate the function with different bases
    printf("Base 10: %d\n", ft_atoi_base("123", 10));            // 123 (decimal)
    printf("Base 15: %d\n", ft_atoi_base("1A3", 15));            // 378  -> (1*15² + 10*15 + 3)
    printf("Base 2: %d\n", ft_atoi_base("1100", 2));             // 12   -> (1*8 + 1*4 + 0*2 + 0)
    printf("Base 8: %d\n", ft_atoi_base("17", 8));               // 15   -> (1*8 + 7)
    printf("Base 16 (negative): %d\n", ft_atoi_base("-1F", 16)); // -31 -> (1*16 + 15)
    printf("Invalid character: %d\n", ft_atoi_base("1G", 16));   // 1   -> stops at 'G'
    printf("Base 4: %d\n", ft_atoi_base("123", 4));              // 27   -> (1*16 + 2*4 + 3)

    return 0; // Exit the program
}
