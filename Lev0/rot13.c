#include <unistd.h>
// ABCDEFGHIJKLM  NOPQRSTUVWXYZ

void Rot(char *str);

int main()
{
    char str[] = "Hello";
    Rot(str);
    return (0);
}
void Rot(char *str)
{
    char *ptr = str;
    while (*ptr)
    {
        if (*ptr >= 'a' && *ptr <= 'm' || *ptr >= 'A' && *ptr <= 'M')
        {
            *ptr = *ptr + 13;
        }
        else if (*ptr >= 'n' && *ptr <= 'z' || *ptr >= 'N' && *ptr <= 'Z')
        {
            *ptr = *ptr - 13;
        }
        write(1, ptr, 1);
        ptr++;
    }
}