#include <unistd.h>
void Expand(char *Str)
{
    int Flag = 1;
    while (*Str)
    {
        while (*Str == ' ' || *Str == '\t')
            Str++;
        if (!Flag && *Str)
            write(1, "   ", 3);
        while (*Str && *Str != ' ' && *Str != '\t')
        {
            write(1, Str, 1);
            Str++;
        }
        Flag = 0;
    }
}
int main(int ac, char **av)
{
    if (ac == 2)
        Expand(av[1]);
    write(1, "\n", 1);
}
