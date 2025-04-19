#include <unistd.h>

void AlphaMiror(char *Str)
{
    while (*Str)
    {
        if (*Str >= 65 && *Str <= 90)
            *Str = 90 - (*Str - 65);
        else if (*Str >= 97 && *Str <= 122)
            *Str = 122 - (*Str - 97);
        write(1, Str, 1);
        Str++;
    }
}
int main()
{
    char Str[] = "";
    AlphaMiror(Str);
    write(1, "\n", 1);
}