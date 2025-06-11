char *Strrev(char *Str)
{
    int Len = 0;
    while (Str[Len])
        Len++;
    int Temp = 0;
    for (int i = 0; i < Len / 2; i++)
    {
        Temp = Str[i];
        Str[i] = Str[Len - i - 1];
        Str[Len - i - 1] = Temp;
    }
    return (Str);
}
#include <stdio.h>
int main()
{
    char Str[5] = "01234";
    printf("%s\n", Strrev(Str));
}