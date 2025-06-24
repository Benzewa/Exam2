#include <unistd.h>

void ulstr(char *s)
{
    int i = 0;
    while (s[i])
    {
        if (s[i] >= 'a' && s[i] <= 'z')
            s[i] -= 32; // Convert to uppercase
        else if (s[i] >= 'A' && s[i] <= 'Z')
            s[i] += 32;     // Convert to lowercase
        write(1, &s[i], 1); // Write the character to the output
        i++;
    }
}

int main(int ac, char **av)
{
    if (ac == 2)       // Check if there's exactly one argument
        ulstr(av[1]);  // Reverse the case of the argument string
    write(1, "\n", 1); // Print a newline regardless of the argument count
}
// pass