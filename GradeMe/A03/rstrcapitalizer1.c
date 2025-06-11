#include <unistd.h>
void rstrCapitalizer(char *Str)
{
    int i = 0;
    while (Str[i])
    {
        if ((Str[i] >= 'a' && Str[i] <= 'z') && (Str[i + 1] == ' ' || Str[i + 1] == '\t' || Str[i + 1] == '\0'))
            Str[i] = Str[i] - 32;
        if ((Str[i] >= 'A' && Str[i] <= 'Z') && (Str[i + 1] != ' ' && Str[i + 1] != '\t' && Str[i + 1] != '\0'))
            Str[i] = Str[i] + 32;
        write(1, &Str[i], 1);
        i++;
    }
}
int main(int Ac, char **Av)
{
    if (Ac < 2)
        write(1, "\n", 1);
    else
    {
        int i = 1;
        while (i < Ac)
        {
            rstrCapitalizer(Av[i]);
            write(1, "\n", 1);
            i++;
        }
        return (0);
    }
}