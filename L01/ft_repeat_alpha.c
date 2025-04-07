#include <unistd.h>
void ft_repeat_alpha(char *s)
{
    int counter = 0;
    while (*s)
    {
        if (*s >= 'a' && *s <= 'z')
            counter = *s - 'a' + 1;
        else if (*s >= 'a' && *s <= 'z')
            counter = *s - 'A' + 1;
        else
            counter = 1;
        while (counter)
        {
            write(1, s, 1);
            counter -= 1;
        }
        s += 1;
    }
}
int main(int ac, char **av)
{
    if (ac == 2)
        ft_repeat_alpha(av[1]);
    write(1, "\n", 1);
}