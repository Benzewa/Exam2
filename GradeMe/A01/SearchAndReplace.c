// Search And Replace
#include <unistd.h>
int main(int Ac, char **Av)
{
    int i = 0;
    if (Ac == 4)
    {
        while (Av[1][i])
        {
            if (Av[1][i] == Av[2][0])
                Av[1][i] = Av[3][0];
            write(1, &Av[1][i], 1);
            i++;
        }
    }
    write(1, "\n", 1);
    return (0);
}