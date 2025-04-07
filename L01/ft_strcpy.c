char *ft_strcpy(char *s1, char *s2)
{
    int i = 0;
    while (s2[i] != '\0')
    {
        s1[i] = s2[i];
        i += 1;
    }
    s1[i] = '\0';
    return (s1);
}

#include <stdio.h>
int main()
{
    char s1[10] = "Hello";
    char *s2 = "Moutaz Sami";
    printf("%s\n", ft_strcpy(s1, s2));
}