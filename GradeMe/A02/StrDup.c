#include <stdlib.h>
#include <stdio.h>

char *ft_strdup(char *src) // CHANGED: function name to match expected prototype
{
    if (!src) // ADDED: null check for input parameter
        return (NULL);

    int len = 0;
    while (src[len]) // CHANGED: use src instead of Src for consistency
        len++;

    char *dup;
    dup = malloc((sizeof(char) * len) + 1);
    if (!dup)          // CHANGED: simplified null check
        return (NULL); // ADDED: return NULL on malloc failure

    int i = 0;
    while (src[i]) // CHANGED: use src instead of Src
    {
        dup[i] = src[i];
        i++;
    }
    dup[i] = '\0';
    return (dup);
}

int main()
{
    char src[10] = "Moutaz";    // CHANGED: lowercase variable name
    char *dup = ft_strdup(src); // CHANGED: function name
    if (dup)                    // ADDED: check before printing
    {
        printf("%s\n", dup);
        free(dup);
    }
    return (0); // ADDED: return statement
}