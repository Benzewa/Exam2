#include <unistd.h>

int main(int ac, char **av)
{
    // Check if we have at least one argument (av[1] exists)
    if (ac > 1)
    {
        int i = 0;

        // Skip leading spaces/tabs at the beginning of string
        while (av[1][i] && (av[1][i] == ' ' || av[1][i] == '\t'))
            i++;

        // Mark the start position of the first word
        int start = i;

        // Find the end of the first word (skip non-whitespace chars)
        while (av[1][i] && (av[1][i] != ' ' && av[1][i] != '\t'))
            i++;

        // Mark the end position of the first word (last character index)
        int end = i - 1;

        // Skip spaces/tabs after the first word
        while (av[1][i] && (av[1][i] == ' ' || av[1][i] == '\t'))
            i++;

        // Process all remaining words (print them before the first word)
        while (av[1][i])
        {
            // Skip any whitespace before the next word
            while (av[1][i] && (av[1][i] == ' ' || av[1][i] == '\t'))
                i++;

            // Check if we actually found a word (not just end of string)
            if (av[1][i] && (av[1][i] != ' ' && av[1][i] != '\t'))
            {
                // Print the current word character by character
                while (av[1][i] && (av[1][i] != ' ' && av[1][i] != '\t'))
                {
                    write(1, &av[1][i], 1);
                    i++;
                }
                // Print a space after the word (only if word was found)
                write(1, " ", 1);
            }
        }

        // Now print the first word at the end
        while (start <= end)
        {
            write(1, &av[1][start], 1);
            start++;
        }
    }
    // Always print newline at the end (even if no arguments)
    write(1, "\n", 1);
}