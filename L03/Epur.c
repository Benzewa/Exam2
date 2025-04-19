#include <unistd.h>
void epur(char *s)
{
    int flag = 0;
    // Skip leading spaces or tabs
    while (*s == ' ' || *s == '\t')
        s++;
    while (*s)
    {
        if (*s == ' ' || *s == '\t')
        {
            // Set flag if space or tab found
            flag = 1;
        }
        else
        {
            // If we had spaces/tabs before, insert a single space
            if (flag)
                write(1, " ", 1);
            flag = 0;
            // Write the current non-space character
            write(1, s, 1);
        }
        s++;
    }
}
int main(int ac, char **av)
{
    if (ac == 2)
        epur(av[1]);
    write(1, "\n", 1);
    return 0;
}