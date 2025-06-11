int Atoi(char *Str)
{
    int i = 0;
    int Num = 0;
    int Sign = 1;

    // Space
    while ((Str[i] >= 9 && Str[i] <= 13) || Str[i] == 32)
        i++;

    // Sign
    if (Str[i] == '-')
    {
        Sign = Sign * -1;
        i++;
    }
    else if (Str[i] == '+')
        i++;

    while (Str[i] >= '0' && Str[i] <= '9')
    {
        Num = (Num * 10) + (Str[i] - '0');
        i++;
    }
    return (Sign * Num);
}
#include <stdio.h>
int main()
{
    printf("%d\n",Atoi("   123"));
    printf("%d\n",Atoi("\t\n-456"));
    printf("%d\n",Atoi("\r +789"));
    printf("%d\n",Atoi("42abc"));
    printf("%d\n",Atoi("abc"));
    printf("%d\n",Atoi(""));
}