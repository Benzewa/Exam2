#include <unistd.h>

void wdmatch(char *s1, char *s2)
{
    char *p;
    p = s1;
    while (*s1 && *s2)
    {
        if (*s1 == *s2)
            s1++;
        s2++;
    }
    if (!*s1)
    {
        while (*p)
            write(1, p++, 1);
    }
}

int main(int ac, char **av)
{
    if (ac == 3)
        wdmatch(av[1], av[2]);
    write(1, "\n", 1);
}