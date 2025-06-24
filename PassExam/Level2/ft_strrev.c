char *ft_strrev(char *str)
{
    int Len = 0;
    while (str[Len])
        Len++;

    int temp;
    for (int i = 0; i < Len / 2; i++)
    {
        temp = str[i];
        str[i] = str[Len - i - 1];
        str[Len - i - 1] = temp;
    }
    return (str);
}
#include <stdio.h>
int main()
{
    char str[] = "hello";
    printf("%s\n", ft_strrev(str));
}