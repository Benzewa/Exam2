#include <unistd.h>

int appeared_before(char c, char *Str, int pos)
{
    int i = 0;
    while (i < pos)
    {
        if (Str[i] == c)
            return (1);
        i++;
    }
    return (0);
}

void inter(char *Str1, char *Str2)
{
    int i = 0;
    int j;
    while (Str1[i])
    {
        j = 0;
        while (Str2[j])
        {
            if (Str1[i] == Str2[j] && !appeared_before(Str1[i], Str1, i))
            {
                write(1, &Str1[i], 1);
                break;
            }
            j++;
        }
        i++;
    }
}

int main(int ac, char **av)
{
    if (ac == 3)
        inter(av[1], av[2]);
    write(1, "\n", 1);
    return (0);
}