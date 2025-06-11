#include <unistd.h>
void strCapatilizer(char *Str)
{
    int i = 0;
    if (Str[i] >= 'a' && Str[i] <= 'z')
        Str[i] = Str[i] - 32;
    write(1, &Str[i], 1);
    i++;
    while (Str[i])
    {
        if (Str[i] >= 'a' && Str[i] <= 'z' && (Str[i - 1] == ' ' || Str[i - 1] == '\t'))
            Str[i] = Str[i] - 32;
        else if (Str[i] >= 'A' && Str[i] <= 'Z' && (Str[i - 1] != ' ' && Str[i - 1] != '\t'))
            Str[i] = Str[i] + 32;
        write(1, &Str[i], 1);
        i++;
    }
}
int main(int Ac, char **Av)
{
    if (Ac < 2)
        write(1, "\n", 1);
    int i = 1;
    while (i < Ac)
    {
        strCapitalizer(Av[i]);
        write(1, "\n", 1);
        i++;
    }
    return (0);
}