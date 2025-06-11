#include <stdlib.h>
// strdup
// 1- len
// 2- malloc

char *StrDup(char *Src)
{
    if (!Src)
        return (NULL);
    int Len = 0;
    while (Src[Len])
        Len++;
    char *Str = malloc((Len * sizeof(char)) + 1);
    if (!Str)
        return (NULL);
    int i = 0;
    while (Src[i])
    {
        Str[i] = Src[i];
        i++;
    }
    Str[i] = '\0';
    return (Str);
}