#include <unistd.h>

void Putnbr(int Num)
{
    char digit;
    if (Num > 9)
        Putnbr(Num / 10);
    digit = Num % 10 + '0';
    write(1, &digit, 1);
}
int ft_atoi(char *Str)
{
    int i = 0;
    int sign = 1;
    int Result = 0;
    // check spaces
    while (Str[i] == ' ' || Str[i] == '\t')
        i++;
    if (Str[i] == '-')
    {
        sign = -1;
        i++;
    }
    else if (Str[i] == '+')
        i++;
    while (Str[i] >= '0' && Str[i] <= '9')
    {
        Result = Result * 10 + (Str[i] - '0');
        i++;
    }
    return (sign * Result);
}
int checkPrime(int Num)
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
void primesum(int Num1)
{
    int i = 1;
    int Total = 0;
    while (i <= Num1)
    {
        if (checkPrime(i))
            Total = Total + i;
        i++;
    }
    Putnbr(Total);
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
            primesum(Num);
            write(1, "\n", 1);
        }
    }
}