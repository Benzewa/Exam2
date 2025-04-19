int Atoi(const char *Str)
{
    int Sign = 1;
    int Result = 0;

    // Skip Leading Spaces
    while (*Str == ' ' || *Str == '\t')
        Str++;

    // Handle The Signs
    if (*Str == '-')
    {
        Sign = -1;
        Str++;
    }
    else if (*Str == '+')
        Str++;
    // Convert numeric characters into integer
    while (*Str >= '0' && *Str <= '9')
    {
        Result = Result * 10 + (*Str - '0');
        Str++;
    }
    return (Result * Sign);
}

#include <stdio.h>
int main()
{
    printf("Input: \"42\" => Output: %d\n", Atoi("42"));
    printf("Input: \"   -42\" => Output: %d\n", Atoi("   -42"));
    printf("Input: \"4193 with words\" => Output: %d\n", Atoi("4193 with words"));
    printf("Input: \"   +123\" => Output: %d\n", Atoi("   +123"));
    printf("Input: \"0000123\" => Output: %d\n", Atoi("0000123"));
    printf("Input: \"-0000123\" => Output: %d\n", Atoi("-0000123"));
    printf("Input: \"   \" => Output: %d\n", Atoi("   "));
    printf("Input: \"+\" => Output: %d\n", Atoi("+"));
    printf("Input: \"-\" => Output: %d\n", Atoi("-"));
    printf("Input: \"abc\" => Output: %d\n", Atoi("abc"));
    printf("Input: \"123abc456\" => Output: %d\n", Atoi("123abc456"));
}