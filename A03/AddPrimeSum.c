#include <unistd.h>
#include <stdio.h>

int Atoi(char *Str)
{
    int Res = 0;
    while (*Str)
    {
        Res = (Res * 10) + (*Str - '0');
        Str++;
    }
    return (Res);
}
int IsPrime(int Num)
{
    int i;
    int Counter = 0;

    for (int i = 1; i <= Num; i++)
    {
        if (Num % i == 0)
            Counter++;
        if (Counter == 2)
            return (1);
        else
            return (0);
    }
}
void PutNbr(int Num)
{
    char Digit;
    if (Num > 9)
        PutNbr(Num / 10);
    Digit = Num % 10 + '0';
    write(1, &Digit, 1);
}
int main(int ac, char **av)
{
    int Sum = 0;
    if (ac == 2)
    {
        int Num = Atoi(av[1]);
        for (int i = 1; i <= Num; i++)
        {
            if (IsPrime(i))
            {
                PutNbr(i);
                printf("\n");
                Sum += i;
            }
        }
        PutNbr(Sum);
    }
    if (ac != 2)
    {
        PutNbr(0);
        write(1, "\n", 1);
    }
}