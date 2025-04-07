#include <unistd.h>

void RotOne(char *str)
{
    while (*str)
    {
        if (*str >= 'a' && *str <= 'y')
            *str = *str + 1;
        else if (*str >= 'A' && *str <= 'Y')
            *str = *str + 1;
        else if (*str == 'z')
            *str = 'a';
        else if (*str == 'Z')
            *str = 'A';
        write(1, str, 1);
        str++;
    }
}

int main(int ac, char **av)
{
    if (ac == 2)
    {
        RotOne(av[1]);
        write(1, "\n", 1);
    }
}