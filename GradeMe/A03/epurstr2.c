#include <unistd.h>
void Epur(char *Str)
{
    int i = 0;
    int First = 1;
    while (Str[i] == ' ' || Str[i] == '\t')
        i++;
    while (Str[i])
    {
        if (First == 0)
            write(1, " ", 1);
        First = 0;
        while (Str[i] && Str[i] != '\t' && Str[i] != ' ')
        {
            write(1, &Str[i], 1);
            i++;
        }
        while (Str[i] == '\t' || Str[i] == ' ')
            i++;
    }
}
int main(int Ac, char **Av)
{
    if (Ac == 2)
        Epur(Av[1]);
    write(1, "\n", 1);
    return (0);
}