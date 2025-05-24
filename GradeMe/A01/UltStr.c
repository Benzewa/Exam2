#include <unistd.h>
#include <stdio.h>

int main(int Ac, char **Av)
{
    int i = 0;
    if (Ac == 2)
    {
        while (Av[1][i])
        {
            if (Av[1][i] >= 'a' && Av[1][i] <= 'z')
                Av[1][i] = Av[1][i] - 32;
            else if (Av[1][i] >= 'A' && Av[1][i] <= 'Z')
                Av[1][i] = Av[1][i] + 32;
            write(1, &Av[1][i], 1);
            i++;
        }
    }
    write(1, "\n", 1);
}