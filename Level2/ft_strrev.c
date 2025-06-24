char *ft_strrev(char *str)
{
    int temp;
    int i = 0;
    int Len = 0;
    while (str[Len])
        Len++;
    while (i < Len / 2)
    {
        temp = str[i];
        str[i] = str[Len - i - 1];
        str[Len - i - 1] = temp;
        i++;
    }
    return (str);
}