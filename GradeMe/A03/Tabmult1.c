#include <unistd.h>
int Atoi(char *Str)
{
    int i = 0;
    int Num = 0;
    while (Str[i])
    {
        Num = Num * 10 + (Str[i] - '0');
        i++;
    }
    return (Num);
}
void PutNbr(int Num)
{
    char Digit;
    if (Num >= 10)
        PutNbr(Num / 10);
    Digit = Num % 10 + '0';
    write(1, &Digit, 1);
}
void Mult(int Num)
{
    for (int i = 1; i <= 9; i++)
    {
        PutNbr(i);
        write(1, " x ", 3);
        PutNbr(Num);
        write(1, " = ", 3);
        PutNbr(i * Num);
        write(1, "\n", 1);
    }
}
int main(int Ac, char **Av)
{
    if (Ac == 2)
        Mult(Atoi(Av[1]));
    else
        write(1, "\n", 1);
    return (0);
}