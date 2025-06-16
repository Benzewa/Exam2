#include <unistd.h>
void revWstr(char *Str)
{
    int Len = 0;
    while (Str[Len])
        Len++;
    int i = Len - 1;
    while (i >= 0)
    {
        if (i >= 0 && (Str[i] == ' ' || Str[i] == '\t'))
            i--;
        if (i < 0)
            break;
        int end = i;
        while (i >= 0 && (Str[i] != ' ' && Str[i] != '\t'))
            i--;
        int start = i + 1;
        while (start <= end)
        {
            write(1, &Str[start], 1);
            start++;
        }
        if (i >= 0)
            write(1, " ", 1);
    }
}
int main(int Ac, char **Av)
{
    if (Ac == 2)
        revWstr(Av[1]);
    write(1, "\n", 1);
    return (0);
}