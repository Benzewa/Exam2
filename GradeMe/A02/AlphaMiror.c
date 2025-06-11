#include <unistd.h>

void AlphaMirror(char *Str)
{
    int i = 0;
    while (Str[i])
    {
        if (Str[i] >= 'a' && Str[i] <= 'z')
            Str[i] = ('a' + 'z') - Str[i];
        else if (Str[i] >= 'A' && Str[i] <= 'Z')
            Str[i] = ('A' + 'Z') - Str[i];
        write(1, &Str[i], 1);
        i++;
    }
}
int main(int Ac, char **Av)
{
    if (Ac == 2)
        AlphaMirror(Av[1]);
    write(1, "\n", 1);
    return (0);
}