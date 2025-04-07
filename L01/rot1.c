#include <unistd.h>

void rotone(char *s)
{
    while (*s)
    {
        if (*s >= 'a' && *s <= 'y')
            *s += 1;
        else if (*s == 'z')
            *s = 'a';
        else if (*s >= 'A' && *s <= 'Y')
            *s += 1;
        else if (*s == 'Z')
            *s = 'A';

        write(1, s, 1);
        s++;
    }
}

int main(int argc, char **argv)
{
    if (argc == 2)
    {
        rotone(argv[1]);
    }
    write(1, "\n", 1);
    return 0;
}
