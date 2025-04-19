int Power(unsigned int Num)
{
    if (Num == 0)
        return (0);
    while (Num > 1)
    {
        if (Num % 2 != 0)
        {
            return (0);
        }
        Num = Num / 2;
    }
    return (1);
}
#include <stdio.h>
int main()
{
    printf("%d\n", Power(1));
    printf("%d\n", Power(4));
    printf("%d\n", Power(0));
    printf("%d\n", Power(144));
    printf("%d\n", Power(43));
}