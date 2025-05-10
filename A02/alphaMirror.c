#include <unistd.h>

void mirror(char *s)
{
    while (*s)
    {
        if (*s >= 'a' && *s <= 'z') // For lowercase characters
            *s = ('a' + 'z') - *s;
        else if (*s >= 'A' && *s <= 'Z') // For uppercase characters
            *s = ('A' + 'Z') - *s;
        write(1, s, 1); // Print each mirrored character
        s++;
    }
}

int main(int ac, char **av)
{
    if (ac == 2) // If there's exactly one argument
        mirror(av[1]);
    write(1, "\n", 1); // Print a newline after the mirrored string
    return 0;
}
