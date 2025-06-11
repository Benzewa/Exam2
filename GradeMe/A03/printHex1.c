#include <unistd.h>
int Atoi(char *Str)
{
    int Num = 0;
    int i = 0;
    while (Str[i])
    {
        Num = Num * 10 + (Str[i] - '0');
        i++;
    }
    return (Num);
}
void PrintHex(int Num)
{
    char Hex[] = "0123456789abcdef";
    if (Num > 15)
        PrintHex(Num / 16);
    write(1, &Hex[Num % 16], 1);
}
int main(int Ac, char **Av)
{
    if (Ac == 2)
    {
        int Num = Atoi(Av[1]);
        PrintHex(Num);
    }
    write(1, "\n", 1);
}