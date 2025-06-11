#include <unistd.h>
int Atoi(char *Str)
{
    int i = 0;
    int Num = 0;
    while (Str[i])
    {
        Num = Num * 10 + (Str[i] - '0');
        i++;
    }
    return (Num);
}
void printHex(int Num)
{
    char Hex[] = "0123456789abcdef";
    if (Num > 15)
        printHex(Num % 16);
    write(1, &Hex[Num % 16], 1);
}
int main(int Ac, char **Av)
{
    if (Ac == 2)
    {
        int Num = Atoi(Av[1]);
        printHex(Num);
    }
    write(1, "\n", 1);
    return (0);
}