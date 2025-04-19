#include <stdio.h>
#include <unistd.h>

void Return(char *Str, char Fin, char Rep)
{
    while (*Str)
    {
        if (*Str == Fin)
        {
            *Str = Rep;
        }
        write(1, Str, 1);
        Str++;
    }
}
int main(int ac, char **av)
{
    if (ac == 4 && !av[2][1] && !av[3][1])
        Return(av[1], av[2][0], av[3][0]);
    write(1, "\n", 1);
}