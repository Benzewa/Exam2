#include <unistd.h>
void PrintBits(unsigned char Num)
{
    int Bin = 0;
    int Rem = 0;
    int Pos = 1;

    printf("Binary of this : ");
    while (Num)
    {
        Rem = Num % 2;
        Num /= 2;
        Bin = Bin + (Rem * Pos);
        Pos = Pos * 10;
    }
    printf("%d\n", Bin);
}