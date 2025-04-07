#include <unistd.h>

void ctos(char *s)
{
    int first_word = 1; // Flag to track if it's the first word

    while (*s)
    {
        if (*s >= 'A' && *s <= 'Z') // If the character is uppercase
        {
            if (!first_word) // Only insert underscore if it's not the first word
                write(1, "_", 1);

            *s += 32; // Convert the uppercase to lowercase
        }
        write(1, s, 1); // Print the character
        s++;
        first_word = 0; // After the first word, we need to insert underscores
    }
}

int main(int ac, char **av)
{
    if (ac == 2)
        ctos(av[1]);
    write(1, "\n", 1);
}
