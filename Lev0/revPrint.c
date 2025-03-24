#include <unistd.h>

char *rev_print(char *s)
{
    char *ptr = s;
    while (*ptr)
    {
        ptr++;
    }
    ptr--;
    while (ptr >= s)
    {
        write(1, ptr, 1);
        ptr--;
    }
    return (s);
}

int main()
{
    rev_print("hello how are you hows evrything");
    return (0);
}