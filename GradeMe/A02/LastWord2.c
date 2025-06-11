#include <unistd.h>
void LastWord(char *Str)
{
    int Len = 0;
    int i = 0;
    while (Str[i])
        i++;
    i--;
    Len = i;
    while (Str[i] != ' ' && Str[i] != '\t' && Str[i])
        i--;
    i++;
    while (i <= Len)
    {
        write(1, &Str[i], 1);
        i++;
    }
}
int main()
{
    char Str[10] = "Motaz Sami";
    LastWord(Str);
}