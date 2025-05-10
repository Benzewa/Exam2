#include <unistd.h>

void ulstr(char *s)
{
    while (*s)
    {
        if (*s >= 'a' && *s <= 'z')
            *s -= 32; // Convert to uppercase
        else if (*s >= 'A' && *s <= 'Z')
            *s += 32;   // Convert to lowercase
        write(1, s, 1); // Write the character to the output
        s++;
    }
}

int main(int ac, char **av)
{
    if (ac == 2) // Check if there's exactly one argument
    {
        ulstr(av[1]); // Reverse the case of the argument string
    }
    write(1, "\n", 1); // Print a newline regardless of the argument count
}
