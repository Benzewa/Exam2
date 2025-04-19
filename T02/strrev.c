int Strlen(char *Str)
{
    int i = 0;
    while (Str[i])
        i++;
    return (i);
}
char *strrev(char *Str)
{
    int i = 0;
    int Length = Strlen(Str);
    int HalfLen = Length / 2;
    int Temp = 0;
    while (i < HalfLen)
    {
        Temp = Str[i];
        Str[i] = Str[Length - i - 1];
        Str[Length - i - 1] = Temp;
        i++;
    }
    return (Str);
}
#include <stdio.h>
int main()
{
    char Str[] = "Hello";
    printf("%s\n", Str);
    printf("%s\n", strrev(Str));
}