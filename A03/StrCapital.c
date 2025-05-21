#include <unistd.h>
void StrCapital(char *Str)
{
    int i = 0;
    if (Str[i] >= 'a' && Str[i] <= 'z')
        Str[i] = Str[i] - 32;
    write(1, &Str[i], 1);
    i++;
    while (Str[i++])
    {
        if (Str[i] >= 'A' && Str[i] <= 'Z')
            Str[i] = Str[i] + 32;
        if ((Str[i] >= 'a' && Str[i] <= 'z') && (Str[i - 1] == ' ' || Str[i - 1] == '\t'))
            Str[i] = Str[i] - 32;
        write(1, &Str[i], 1);
    }
}
int main(int ac, char **av)
{
    int i;
    if (ac < 2)
        write(1, "\n", 1);
    else
    {
        i = 1;
        while (i < ac)
        {
            StrCapital(av[i]);
            write(1, "\n", 1);
            i++;
        }
    }
    return (0);
}