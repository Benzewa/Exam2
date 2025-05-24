#include <unistd.h>
char *RevPrint(char *Str)
{
    int i = 0;
    while (Str[i])
        i++;
    i--;
    while (i >= 0)
    {
        write(1, &Str[i], 1);
        i--;
    }
    write(1, "\n", 1);
    return (Str);
}
#include <stdio.h>
int main()
{
    char Str[] = "Moutaz";
    printf("%s\n", RevPrint(Str));
}