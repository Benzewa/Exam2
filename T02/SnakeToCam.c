#include <unistd.h>
void SnakeToCam(char *Str)
{
    while (*Str)
    {
        if (*Str == '_')
        {
            Str++;
            if (*Str >= 97 && *Str <= 122)
                *Str = *Str - 32;
        }
        write(1, Str, 1);
        Str++;
    }
}
int main(int ac, char **av)
{
    if (ac == 2)
        SnakeToCam(av[1]);
    write(1, "\n", 1);
}