#include <unistd.h>

void Rot13(char *str)
{
    while (*str)
    {
        if (*str >= 'a' && *str <= 'm')
            *str = *str + 13;
        else if (*str >= 'n' && *str <= 'z')
            *str = *str - 13;
        if (*str >= 'A' && *str <= 'M')
            *str = *str + 13;
        else if (*str >= 'N' && *str <= 'Z')
            *str = *str - 13;
        write(1, str, 1);
        str++;
    }
}

int main(int ac, char **av)
{
    if (ac == 2)
    {
        Rot13(av[1]);
        write(1, "\n", 1);
    }
}