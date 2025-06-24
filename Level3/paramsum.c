#include <unistd.h>
void putnbr(int Num)
{
    char Digit;
    if (Num > 9)
        putnbr(Num / 10);
    Digit = Num % 10 + '0';
    write(1, &Digit, 1);
}
int main(int Ac, char **Av)
{
    (void)Av;
    putnbr(Ac - 1);
    write(1, "\n", 1);
}

// passed myself