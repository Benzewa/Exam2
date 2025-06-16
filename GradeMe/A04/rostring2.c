#include <unistd.h>
int main(int Ac, char **Av)
{
    if (Ac > 1)
    {
        int i = 0;
        while (Av[1][i] && (Av[1][i] == ' ' || Av[1][i] == '\t'))
            i++;
        int start = i;
        while (Av[1][i] && (Av[1][i] != ' ' && Av[1][i] != '\t'))
            i++;
        int end = i - 1;
        while (Av[1][i] && (Av[1][i] == ' ' || Av[1][i] == '\t'))
            i++;
        while (Av[1][i])
        {
            while (Av[1][i] && (Av[1][i] == ' ' || Av[1][i] == '\t'))
                i++;
            if (Av[1][i] && (Av[1][i] != ' ' && Av[1][i] != '\t'))
            {
                while (Av[1][i] && (Av[1][i] != ' ' && Av[1][i] != '\t'))
                {
                    write(1, &Av[1][i], 1);
                    i++;
                }
                write(1, " ", 1);
            }
        }
        while (start <= end)
        {
            write(1, &Av[1][start], 1);
            start++;
        }
    }
    write(1, "\n", 1);
}