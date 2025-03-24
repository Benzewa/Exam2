#include <stdio.h>
#include <unistd.h>

void Repeat(char *s)
{
    int count;
    while (*s)
    {
        if (*s >= 'a' && *s <= 'z')
            count = *s - 'a' + 1;
        else if (*s >= 'A' && *s <= 'Z')
            count = *s - 'A' + 1;
        else
            count = 1;
        while (count != 0)
        {
            write(1, s, 1);
            count--;
        }
        s++;
    }
}
int main()
{
    Repeat("Hello");
}