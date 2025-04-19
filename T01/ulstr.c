#include <unistd.h>
#include <stdio.h>

int main()
{
    char Str[] = "Hello $$$ World  $$$ My Name Is $$$ Moutaz";
    int i = 0;
    while (Str[i])
    {
        if (Str[i] >= 65 && Str[i] <= 90)
            Str[i] = Str[i] + 32;
        else if (Str[i] >= 97 && Str[i] <= 122)
            Str[i] = Str[i] - 32;
        i++;
    }
    printf("%s\n", Str);
}