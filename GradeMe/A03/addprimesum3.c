#include <unistd.h>

void putNbr(int Num)
{
    char digit;
    if (Num > 9)
        putNbr(Num / 10);
    digit = Num % 10 + '0';
    write(1, &digit, 1);
}

int ft_atoi(char *Str)
{
    int i = 0;
    int Sign = 1;
    int Result = 0;

    while (Str[i] == ' ' || Str[i] == '\t')
        i++;
    if (Str[i] == '-')
    {
        Sign = -1;
        i++;
    }
    else if (Str[i] == '+')
        i++;
    while (Str[i] >= '0' && Str[i] <= '9')
    {
        Result = Result * 10 + (Str[i] - '0');
        i++;
    }
    return (Sign * Result);
}
int isPrime(int Num)
{
    int i = 1;
    int Counter = 0;
    while (i <= Num)
    {
        if (Num % i == 0)
            Counter++;
        i++;
    }
    if (Counter == 2)
        return (1);
    return (0);
}
void addPrimeSum(int Num)
{
    int i = 1;
    int Sum = 0;
    while (i <= Num)
    {
        if (isPrime(i))
            Sum = Sum + i;
        i++;
    }
    putNbr(Sum);
}
int main(int Ac, char **Av)
{
    if (Ac != 2)
        write(1, "0\n", 2);
    else
    {
        int Num = ft_atoi(Av[1]);
        if (Num <= 0)
            write(1, "0\n", 2);
        else
        {
            addPrimeSum(Num);
            write(1, "\n", 1);
        }
    }
}