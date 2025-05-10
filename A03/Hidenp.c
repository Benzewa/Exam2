#include <unistd.h>
void Hidenp(char *a, char *b)
{
    while (*a && *b)
    {
        if (*a == *b)
            a++;
        b++;
    }
    if (*a == '\0')
        write(1, "1", 1);
    else
        write(1, "0", 1);
}
int main(int ac, char **av)
{
    if (ac == 3)
        Hidenp(av[1], av[2]);
    write(1, "\n", 1);
}