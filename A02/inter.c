#include <unistd.h>

void inter(char *s1, char *s2)
{
    char ascii[256] = {0};

    // Record characters from s2 in the ascii array
    while (*s2)
    {
        ascii[(unsigned char)*s2] = 1;
        s2++;
    }

    // Print characters from s1 that also appear in s2
    while (*s1)
    {
        if (ascii[(unsigned char)*s1] == 1)
        {
            write(1, s1, 1);               // Write one character at a time
            ascii[(unsigned char)*s1] = 0; // Avoid printing duplicates
        }
        s1++;
    }
}

int main(int ac, char **av)
{
    // Check if two strings are provided
    if (ac == 3)
    {
        inter(av[1], av[2]);
    }
    else
    {
        write(1, "\n", 1); // Print a newline if arguments are incorrect
    }
    return 0;
}
