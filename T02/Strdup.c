#include <stdlib.h>
#include <stdio.h>

char *Strdup(char *Src)
{
    int i = 0;
    int Len = 0;
    char *Str;
    while (Src[Len])
        Len++;
    Str = malloc(sizeof(*Str) * (Len + 1));
    if (Str != NULL)
    {
        while (Src[i])
        {
            Str[i] = Src[i];
            i++;
        }
        Str[i] = '\0';
    }
    return (Str);
}
int main()
{
    char Str[17] = "Hello";
    char *Result = Strdup(Str);
    printf("%s\n", Result);
    free(Result);
    return (0);
}