#include <stdlib.h>
char *ft_strdup(char *str)
{
    int Len = 0;
    while (str[Len])
        Len++;
    char *dup = malloc(sizeof(char) * Len + 1);
    int i = 0;
    while (str[i])
    {
        dup[i] = str[i];
        i++;
    }
    dup[i] = '\0';
    return (dup);
}
// passed Myself