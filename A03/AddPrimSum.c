#include <unistd.h>
int Atoi(char *Str)
{
    int Res = 0;
    while (*Str)
    {
        Res = Res * 10 + *Str - '0';
        Str++;
    }
    return (Res);
}
int IsPrime(int Num)
{
    int i = 2;
    if (Num <= 1)
        return (0);
    while (i * i <= Num)
    {
        if (Num % i == 0)
            return (0);
        i++;
    }
    return (1);
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
    int Sum = 0;
    if (Ac == 2)
    {
        int Num = Atoi(Av[1]);
        while (Num > 0)
        {
            if (IsPrime(Num))
                Sum += Num;
            Num--;
        }
        PutNbr(Sum);
    }
}