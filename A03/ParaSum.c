#include <unistd.h>

void PutNbr(int Num)
{
    char Digit;
    if (Num >= 10)
        PutNbr(Num / 10);
    Digit = (Num % 10) + '0';
    write(1, &Digit, 1);
}
int main(int Ac, char **Av)
{
    (void)Av;
    PutNbr(Ac - 1);
    write(1, "\n", 1);
}