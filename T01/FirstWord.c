#include <unistd.h>

void FirstWord(char *Str)
{
    int i = 0;
    while (Str[i] == ' ' || Str[i] == '\t')
        i++;
    while (Str[i] != ' ' && Str[i] != '\t')
    {
        write(1, &Str[i], 1);
        i++;
    }
    write(1, "\n", 1);
}
int main(int ac, char **av)
{
    if (ac == 2)
    {
        FirstWord(av[1]);
    }
}