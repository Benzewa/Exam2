#include <unistd.h>

void putnbr(int n)
{
    char digit;
    if (n > 9)
        putnbr(n / 10);
    digit = n % 10 + '0';
    write(1, &digit, 1);
}

int main()
{
    for (int i = 1; i <= 100; i++)
    {
        if (i % 3 == 0 && i % 5 == 0)
            write(1, "fizzbuzz\n", 9);
        else if (i % 3 == 0)
            write(1, "fizz\n", 5);
        else if (i % 5 == 0)
            write(1, "buzz\n", 5);
        else
        {
            putnbr(i);
            write(1, "\n", 1);
        }
    }
}