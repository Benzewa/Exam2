#include <unistd.h>
void CamToSnake(char *Str)
{
    int First = 1;
    int i = 0;
    while (Str[i])
    {
        if (Str[i] >= 'A' && Str[i] <= 'Z')
        {
            if (!First)
                write(1, "_", 1);
            Str[i] = Str[i] + 32;
        }
        write(1, &Str[i], 1);
        i++;
        First = 0;
    }
}
int main(int Ac, char **Av)
{
    if (Ac == 2)
        CamToSnake(Av[1]);
    write(1, "\n", 1);
    return (0);
}
