#include <unistd.h>
void sr(char *s, char a, char b)
{
    int i = 0;
    while (s[i])
    {
        if (s[i] == a)
            s[i] = b;
        write(1, &s[i], 1);
        i++;
    }
}

int main(int ac, char **av)
{
    if (ac == 4 && !av[2][1] && !av[3][1]) // Ensure only one character in argv[2] and argv[3]
        sr(av[1], av[2][0], av[3][0]);
    write(1, "\n", 1); // Print newline at the end
}
// pass