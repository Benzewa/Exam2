#include <stdio.h>
int ft_strlen(char *str);
int main()
{
    printf("Length : %d", ft_strlen("fghjkhjfghj"));
}
int ft_strlen(char *str)
{
    int i = 0;
    while (str[i])
    {
        i++;
    }
    return (i);
}