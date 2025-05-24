#include <unistd.h>
int main(int Ac, char **Av)
{
    if (Ac == 2)
    {
        int i = 0;
        while (Av[1][i])
            i++;
        i--;
        while (i >= 0)
        {
            write(1, &Av[1][i], 1);
            i--;
        }
    }
    write(1, "\n", 1);
    return (0);
}