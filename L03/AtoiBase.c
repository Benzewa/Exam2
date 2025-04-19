#include <stdio.h>

// Converts uppercase characters to lowercase
char to_lower(char c)
{
    if (c >= 'A' && c <= 'Z')
        return (c + ('a' - 'A'));
    return (c);
}

// Converts a character to a numeric digit if valid for the given base
int get_digit(char c, int digits_in_base)
{
    int max_digit;

    if (digits_in_base <= 10)
        max_digit = digits_in_base - 1 + '0';
    else
        max_digit = digits_in_base - 10 - 1 + 'a';

    if (c >= '0' && c <= '9' && c <= max_digit)
        return (c - '0');
    else if (c >= 'a' && c <= 'f' && c <= max_digit)
        return (10 + c - 'a');
    else
        return (-1);
}

// Converts a string to an integer using the given base
int ft_atoi_base(const char *str, int str_base)
{
    int result = 0;
    int sign = 1;
    int digit;

    if (str == NULL || str_base < 2 || str_base > 16)
        return 0;

    if (*str == '-')
    {
        sign = -1;
        ++str;
    }

    while (*str)
    {
        digit = get_digit(to_lower(*str), str_base);
        if (digit == -1)
            break;
        result = result * str_base + digit;
        ++str;
    }
    return (result * sign);
}

int main(void)
{
    printf("Base 10: %d\n", ft_atoi_base("123", 10));            // 123
    printf("Base 15: %d\n", ft_atoi_base("1A3", 15));            // 378  -> (1*225 + 10*15 + 3)
    printf("Base 2: %d\n", ft_atoi_base("1100", 2));             // 12   -> (1*8 + 1*4 + 0*2 + 0)
    printf("Base 8: %d\n", ft_atoi_base("17", 8));               // 15   -> (1*8 + 7)
    printf("Base 16 (negative): %d\n", ft_atoi_base("-1F", 16)); // -31 -> (1*16 + 15)
    printf("Invalid character: %d\n", ft_atoi_base("1G", 16));   // 1   -> stops at 'G'
    printf("Base 4: %d\n", ft_atoi_base("123", 4));              // 27   -> (1*16 + 2*4 + 3)
    return 0;
}
