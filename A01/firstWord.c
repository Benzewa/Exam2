#include <unistd.h>
void FirstWord(char *s)
{
    while (*s == ' ' || *s == '\t')
        s++;
    while (*s != ' ' && *s != '\t')
    {
        write(1, s, 1);
        s++;
    }
}
int main(int ac, char **av)
{
    if (ac == 2)
    {
        FirstWord(av[1]);
    }
    write(1, "\n", 1);
}