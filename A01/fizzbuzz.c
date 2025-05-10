#include <unistd.h>
void putnbr(int n)
{
    char digit;
    if (n > 9)
        putnbr(n / 10);
    digit = n % 10 + '0';
    write(1, &digit, 1);
}
int main(void)
{
    for (int i = 1; i <= 100; i++)
    {
        if (i % 15 == 0)
            write(1, "FIZZBUZZ", 8);
        else if (i % 5 == 0)
            write(1, "FIZZ", 4);
        else if (i % 3 == 0)
            write(1, "BUZZ", 4);
        else
            putnbr(i);
        write(1, "\n", 1);
    }
}