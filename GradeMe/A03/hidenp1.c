#include <unistd.h>

int Hide(char *Str1, char *Str2)
{
    int i = 0;
    int j = 0;

    while (Str1[i] && Str2[j])
    {
        if (Str1[i] == Str2[j])
            i++;
        j++;
    }
    if (Str1[i] == '\0')
        write(1, "1", 1);
    else
        write(1, "0", 1);
    return (0);
}
int main(int Ac, char **Av)
{
    if (Ac == 3)
        Hide(Av[1], Av[2]);
    write(1, "\n", 1);
    return (0);
}
