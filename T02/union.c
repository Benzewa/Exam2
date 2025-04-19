#include <unistd.h>
void Union(char *Str1, char *Str2)
{
    char Seen[256] = {0};
    while (*Str1)
    {
        if (!Seen[(unsigned char)*Str1])
        {
            write(1, Str1, 1);
            Seen[(unsigned char)*Str1] = 1;
        }
        Str1++;
    }
    while (*Str2)
    {
        if (!Seen[(unsigned char)*Str2])
        {
            write(1, Str2, 1);
            Seen[(unsigned char)*Str2] = 1;
        }
        Str2++;
    }
}
int main(int ac, char **av)
{
    if (ac == 3)
    {
        Union(av[1], av[2]);
    }
    write(1, "\n", 1);
    return (0);
}