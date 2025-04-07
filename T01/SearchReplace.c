#include <unistd.h>
#include <stdio.h>

char *Return(char *Str, char Find, char Rep)
{
    char *OriginalStr = Str;
    while (*Str)
    {
        if (*Str == Find)
            *Str = Rep;
        Str++;
    }
    return OriginalStr;
}

int main()
{
    char Str[] = "Moutaz";
    char Find = 'o';
    char Rep = 'x';
    printf("%s\n", Return(Str, Find, Rep));
}
