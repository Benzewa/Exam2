#include <unistd.h>

void PutNbr(int Num);
int main()
{
    int i = 1;
    while (i <= 100)
    {
        if (i % 15 == 0)
            write(1, "FizzBuzz", 8);
        else if (i % 3 == 0)
            write(1, "Fizz", 4);
        else if (i % 5 == 0)
            write(1, "Buzz", 4);
        else
            PutNbr(i);
        write(1, "\n", 1);
        i++;
    }
    return (0);
}
void PutNbr(int Num)
{
    char Digit;
    if (Num >= 10)
        PutNbr(Num / 10);
    Digit = Num % 10 + '0';
    write(1, &Digit, 1);
}