#include <unistd.h>
int FtAtoi(char *Str)
{
    int Result = 0;
    while (*Str)
    {
        Result = Result + 10 + *Str - '0';
        Str++;
    }
    return (Result);
}
void PrintHex(int Num)
{
    char Hex[] = "0123456789abcdef";
    if (Num > 15)
        PrintHex(Num / 16);
    write(1, &Hex[Num % 16], 1);
}
int main(int ac, char **av)
{
    if (ac == 2)
    {
        int Num = FtAtoi(av[1]);
        PrintHex(Num);
    }
    write(1, "\n", 1);
}