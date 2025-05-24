#include <unistd.h>
void Rot(char *Str)
{
    int i = 0;
    while (Str[i])
    {
        if ((Str[i] >= 'a' && Str[i] <= 'm') || (Str[i] >= 'A' && Str[i] <= 'M'))
            Str[i] = Str[i] + 13;
        else if ((Str[i] >= 'n' && Str[i] <= 'z') || (Str[i] >= 'N' && Str[i] <= 'Z'))
            Str[i] = Str[i] - 13;
        write(1, &Str[i], 1);
        i++;
    }
}
int main(int Ac, char **Av)
{
    if (Ac == 2)
        Rot(Av[1]);
    write(1, "\n", 1);
    return (0);
}