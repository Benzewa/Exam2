#include <unistd.h>
int Appeared(char c, char *Str, int Pos)
{
    int i = 0;
    while (i <= Pos)
    {
        if (c == Str[i])
            return (1);
        i++;
    }
    return (0);
}
void inter(char *Str1, char *Str2)
{
    int i = 0;
    int j = 0;
    while (Str1[i])
    {
        j = 0;
        while (Str2[j])
        {
            if ((Str1[i] == Str2[j]) && !Appeared(Str1[i], Str1, i))
            {
                write(1, &Str1[i], 1);
                break;
            }
            j++;
        }
        i++;
    }
}
int main(int Ac,char **Av)
{
    if(Ac == 3)
    {
        
    }    
}