#include <unistd.h>

// ✅ Correct and now used properly
int IsFound(char *Str, char c, int Pos)
{
    int i = 0;
    while (i < Pos)
    {
        if (c == Str[i])
            return (1);
        i++;
    }
    return (0);
}

void Union(char *Str1, char *Str2)
{
    int i = 0;
    int Len = 0;

    while (Str1[i])
    {
        if (!IsFound(Str1, Str1[i], i)) // ✅ FIXED
            write(1, &Str1[i], 1);
        i++;
    }

    Len = i;
    i = 0;
    while (Str2[i])
    {
        if (!IsFound(Str1, Str2[i], Len) && !IsFound(Str2, Str2[i], i)) // ✅ FIXED
            write(1, &Str2[i], 1);
        i++;
    }
}

int main(int Ac, char **Av)
{
    if (Ac == 3)
        Union(Av[1], Av[2]);
    write(1, "\n", 1);
}
