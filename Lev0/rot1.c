#include <unistd.h>
#include <stdio.h>

void Rot(char *str);

int main()
{
    char str[] = "zello";
    Rot(str);
    return (0);
}
void Rot(char *str)
{
    char *ptr = str;
    while (*ptr)
    {
        if ((*ptr >= 'a' && *ptr < 'z') || (*ptr >= 'A' && *ptr < 'Z'))
            *ptr = *ptr + 1;
        else if ((*ptr == 'z') || (*ptr == 'Z'))
            *ptr = *ptr - 25;
        write(1, ptr, 1);
        ptr++;
    }
}