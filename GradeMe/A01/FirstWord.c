#include <unistd.h>
void FirstWord(char *Str)
{
    if (*Str == ' ' || *Str == '\t')
        Str++;
    while (*Str != ' ' && *Str != '\t' && *Str != '\0')
    {
        write(1, Str, 1);
        Str++;
    }
}
int main(int Ac, char **Av)
{
    if (Ac == 2)
        FirstWord(Av[1]);
    write(1, "\n", 1);
}