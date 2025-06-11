int Atoi(char *Str)
{
    int i = 0;
    int Sign = 1;
    int Num = 0;

    while ((Str[i] >= 9 && Str[i] <= 13) || Str[i] == 32)
        i++;

    if (Str[i] == '-')
    {
        Sign = Sign * -1;
        i++;
    }
    else if (Str[i] == '+')
        i++;

    while (Str[i] == '0' && Str[i] <= '9')
    {
        Num = (Num * 10) + (Str[i] - '0');
        i++;
    }
    return (Sign * Num);
}