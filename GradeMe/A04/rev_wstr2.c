#include <unistd.h>
#include <stdlib.h>

int main(int ac, char **av)
{
    if (ac == 2)
    {
        int i = 0;
        while (av[1][i])
            i++;
        i--;
        while (i >= 0)
        {
            // CHANGED: Skip spaces/tabs properly
            while (i >= 0 && (av[1][i] == ' ' || av[1][i] == '\t'))
                i--;
            // CHANGED: Check if we've reached the beginning
            if (i < 0)
                break;
            int end = i;
            // CHANGED: Find the START of the word (not just move back 1)
            while (i >= 0 && av[1][i] != ' ' && av[1][i] != '\t')
                i--;
            int start = i + 1;
            while (start <= end)
            {
                write(1, &av[1][start], 1);
                start++;
            }

            // CHANGED: Only print space if there are more words to come
            if (i >= 0)
                write(1, " ", 1);
        }
    }
    write(1, "\n", 1);
}