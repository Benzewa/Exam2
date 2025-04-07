#include <unistd.h>
void putnbr(int n);
int main()
{
    for (int i = 1; i <= 100; i++)
    {
        if (i % 15 == 0)
            write(1, "fizzbuzz", 8);
        else if (i % 3 == 0)
            write(1, "fizz", 4);
        else if (i % 5 == 0)
            write(1, "buzz", 4);
        else
            putnbr(i);
        write(1, "\n", 1);
    }
}
void putnbr(int n)
{
    char c;
    if (n > 9)
        putnbr(n / 10);
    c = n % 10 + '0';
    write(1, &c, 1);
}