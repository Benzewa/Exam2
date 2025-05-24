#include <stdio.h>
int StrLen(char *Str)
{
    int i = 0;
    while (*Str)
    {
        Str++;
        i++;
    }
    return (i);
}
int main()
{
    printf("%d\n", StrLen("Hello"));
}