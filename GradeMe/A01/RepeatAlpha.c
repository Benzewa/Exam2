#include <unistd.h>
void RepeatAlpha(char *Str)
{
    int i = 0;
    int Times = 0;

    while (Str[i])
    {
        if (Str[i] >= 'a' && Str[i] <= 'z')
            Times = Str[i] - 'a' + 1;
        else if (Str[i] >= 'A' && Str[i] <= 'Z')
            Times = Str[i] - 'A' + 1;
        else
            Times = 1;
        while (Times)
        {
            write(1, &Str[i], 1);
            Times--;
        }
        i++;
    }
}
int main(int Ac, char **Av)
{
    if (Ac == 2)
        RepeatAlpha(Av[1]);
    write(1, "\n", 1);
}