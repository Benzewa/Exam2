#include <unistd.h>
#include <stdio.h>

int main()
{
    char *str = "Nello";
    char *ptr = str;

    printf("%c", (*ptr - 13));
}