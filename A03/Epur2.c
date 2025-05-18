#include <unistd.h>
void Epur(char *Str)
{
    int Flag = 0;
    while (*Str == ' ' || *Str == '\t')
        Str++;
    while (*Str)
    {
        if (*Str == ' ' || *Str == '\t')
            Flag = 1;
        else
        {
            if (Flag)
                write(1, " ", 1);
            Flag = 0;
            write(1, Str, 1);
        }
        Str++;
    }
}
int main(int Ac, char **Av)
{
    if (Ac == 2)
        Epur(Av[1]);
    write(1, "\n", 1);
    return (0);
}