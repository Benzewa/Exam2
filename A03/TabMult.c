#include <unistd.h>
int Atoi(char *Str)
{
    int Res = 0;
    while (*Str == ' ' && (*Str >= 9 || *Str <= 13))
        Str++;
    if (*Str == '+')
        Str++;
    while (*Str >= '0' && *Str <= '9')
    {
        Res = Res * 10 + *Str - '0';
        Str++;
    }
    return (Res);
}
void PutNbr(int Num)
{
    char Digit;
    if (Num >= 9)
        PutNbr(Num / 10);
    Digit = Num % 10 + '0';
    write(1, &Digit, 1);
}
int main(int Ac, char **Av)
{
    int i = 1;
    int Num = Atoi(Av[1]);
    if (Ac == 2)
    {
        while (i < 10 && Num <= 238609294)
        {
            PutNbr(i);
            write(1, " x ", 3);
            PutNbr(Num);
            write(1, " = ", 3);
            PutNbr(i * Num);
            write(1, "\n", 1);
            i++;
        }
    }
    write(1, "\n", 1);
}