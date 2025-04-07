int ft_atoi(const char *str)
{
    int sign = 1;
    int result = 0;

    // Skip leading whitespaces (spaces and tabs)
    while (*str == ' ' || *str == '\t')
        str++;

    // Handle the sign if present
    if (*str == '-')
    {
        sign = -1;
        str++;
    }
    else if (*str == '+')
    {
        str++;
    }

    // Convert numeric characters to integer
    while (*str >= '0' && *str <= '9')
    {
        result = result * 10 + (*str - '0');
        str++;
    }

    return sign * result;
}
