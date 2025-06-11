#include <unistd.h>
void LastWord(char *Src)
{
    int i = 0;
    while (Src[i])
        i++;
    i--;
    int Len = i;
    while ((Src[i] != ' ' && Src[i] != '\t') && Src[i])
        i--;
    i++;
    while (i <= Len)
    {
        write(1, &Src[i], 1);
        i++;
    }
}
int main()
{
    char *Str = "Moutaz SAmi";
    LastWord(Str);
}