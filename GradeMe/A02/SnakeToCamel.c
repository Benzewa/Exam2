#include <unistd.h>
#include <stdlib.h>

void SnakeToCamel(char *Src)
{
    int i = 0;
    while (Src[i])
    {
        if (Src[i] == '_')
        {
            i++;
            if (Src[i] >= 'a' && Src[i] <= 'z')
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
}