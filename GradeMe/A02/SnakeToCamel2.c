#include <unistd.h>

void SnakeToCamel(char *Src)
{
    int i = 0;
    while (Src[i])
    {
        if (Src[i] == '_')
        {
            i++;
            if (Src[i] >= 97 && Src[i] <= 122)
                Src[i] = Src[i] - 32;
        }
        write(1, &Src[i], 1);
        i++;
    }
}

int main(int Ac, char **Av)
{
    if (Ac == 2)
        SnakeToCamel(Av[1]);
    write(1, "\n", 1);
    return (0);
}