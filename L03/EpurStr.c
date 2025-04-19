#include <unistd.h>
void expand(char *s)
{
    int f = 1;

    while(*s)
    {
        while (*s == ' ' || *s == '\t')
            s++;
        if (!f && *s)
            write(1, "   ", 3);
        while(*s && *s != ' ' && *s != '\t')
        {
            write(1, s, 1);
            s++;
        }
        f = 0;
    }
}


int main (int ac, char **av)
{
    if (ac == 2)
        expand(av[1]);
    write(1, "\n", 1);
}
