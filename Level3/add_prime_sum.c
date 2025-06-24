#include <unistd.h>
void putnbr(int Num)
{
    char digit;
    if (Num > 9)
        putnbr(Num / 10);
    digit = Num % 10 + '0';
    write(1, &digit, 1);
}
int isPrime(int Num)
{
    int Counter = 0;
    int i = 1;
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
int ft_atoi(char *str)
{
    int i = 0;
    while (str[i] == ' ' || str[i] == '\t')
        i++;
    int sign = 1;
    if (str[i] == '-')
    {
        sign = -1;
        i++;
    }
    if (str[i] == '+')
        i++;
    int res = 0;
    while (str[i] >= '0' && str[i] <= '9')
    {
        res = res * 10 + (str[i] - '0');
        i++;
    }
    return (res * sign);
}
void add_prime_sum(int Num)
{
    int i = 1;
    int Sum = 0;
    while (i <= Num)
    {
        if (isPrime(i))
            Sum += i;
        i++;
    }
    putnbr(Sum);
}
int main(int Ac, char **Av)
{
    if (Ac == 2)
        add_prime_sum(ft_atoi(Av[1]));
    else
        write(1, "0", 1);
    write(1, "\n", 1);
}

// Passed Myself