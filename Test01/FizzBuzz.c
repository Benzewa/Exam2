#include <unistd.h>

void Putnbr(int Num)
{
    
}
void FizzBuzz()
{
    for (int i = 1; i <= 100; i++)
    {
        if (i % 15 == 0)
            write(1, "FizzBuzz", 8);
        else if (i % 5 == 0)
            write(1, "Buzz", 4);
        else if (i % 3 == 0)
            write(1, "Fizz", 4);
        else
            Putnbr(i);
        write(1, "\n", 1);
    }
}