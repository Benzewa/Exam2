#include <unistd.h>
void Rot(char *Str)
{
    int i = 0;
    while (Str[i])
    {
        if ((Str[i] >= 'a' && Str[i] <= 'y') || (Str[i] >= 'A' && Str[i] <= 'Y'))
            Str[i] = Str[i] + 1;
        else if ((Str[i] == 'z') || (Str[i] == 'Z'))
            Str[i] = Str[i] - 25;
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