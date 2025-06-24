#include <unistd.h>
void wdmatch(char *Str1, char *Str2)
{
    char *Ptr = Str1;
    int i = 0;
    int j = 0;

    while (Str1[i] && Str2[j])
    {
        if (Str1[i] == Str2[j])
            i++;
        j++;
    }
    if (Str1[i] == '\0')
    {
        i = 0;
        while (Ptr[i])
        {
            write(1, &Ptr[i], 1);
            i++;
        }
    }
}
int main(int Ac, char **Av)
{
    if (Ac == 3)
        wdmatch(Av[1], Av[2]);
    write(1, "\n", 1);
    return (0);
}
// pass