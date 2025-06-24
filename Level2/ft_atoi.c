int ft_atoi(char *str)
{
    int i = 0;
    int sign = 1;
    int Res = 0;
    while (str[i] == ' ' || str[i] == '\t')
        i++;
    while (str[i] == '-')
    {
        sign = -1;
        i++;
    }
    if (str[i] == '+')
        i++;
    while (str[i] >= '0' && str[i] <= '9')
    {
        Res = Res * 10 + (str[i] - '0');
        i++;
    }
    return (Res * sign);
}
// passed Myself