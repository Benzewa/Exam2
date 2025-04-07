#include <stdio.h>

char *ft_strrev(char *str)
{
    int i = 0;
    int len = 0;
    char temp;

    if (!str)
        return NULL;

    // Find the length of the string
    while (str[len])
        len++;

    len--; // Adjust to the last valid character

    // Reverse the string in-place
    while (len > i)
    {
        temp = str[i];
        str[i] = str[len];
        str[len] = temp;
        i++;
        len--;
    }

    return str;
}

int main()
{
    char str[] = "Hello, World!";

    printf("Original string: %s\n", str);
    printf("Reversed string: %s\n", ft_strrev(str));

    return 0;
}
