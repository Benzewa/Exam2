#include <unistd.h>
void FirstWord(char *Str)
{
    while (*Str == '\t' || *Str == ' ')
        Str++;
    while (*Str != ' ' && *Str != '\t')
    {
        write(1, Str, 1);
        Str++;
    }
}
int main(int ac, char **av)
{
    if (ac == 2)
        FirstWord(av[1]);
    write(1, "\n", 1);
}