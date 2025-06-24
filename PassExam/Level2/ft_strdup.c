#include <stdlib.h>
char *ft_strdup(char *src)
{
    int i = 0;
    while (src[i])
        i++;
    char *str = malloc((sizeof(char) * i) + 1);
    if (!str)
        return (NULL);
    i = 0;
    while (src[i])
    {
        str[i] = src[i];
        i++;
    }
    str[i] = '\0';
    return (str);
}
// pass