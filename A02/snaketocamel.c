#include <unistd.h>

void stoc(char *s)
{
    while (*s)
    {
        if (*s == '_')
        {
            s++;
            if (*s >= 'a' || *s <= 'z')
                *s -= 32;
        }
        write(1, s, 1);
        s++;
    }
}

int main(int ac, char **av)
{
    if (ac == 2)
        stoc(av[1]);
    write(1, "\n", 1);
}