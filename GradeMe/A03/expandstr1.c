#include <unistd.h>
void expandStr(char *Str)
{
    int i = 0;
    int FirstWord = 1;

    while (Str[i] == ' ' || Str[i] == '\t')
        i++;
    while (Str[i])
    {
        if (FirstWord == 0)
            write(1, "   ", 3);
        FirstWord = 0;
        while (Str[i] && Str[i] != ' ' && Str[i] != '\t')
        {
            write(1, &Str[i], 1);
            i++;
        }
        while (Str[i] && (Str[i] == ' ' || Str[i] == '\t'))
            i++;
    }
}
int main(int Ac, char **Av)
{
    if (Ac == 2)
        expandStr(Av[1]);
    write(1, "\n", 1);
    return (0);
}