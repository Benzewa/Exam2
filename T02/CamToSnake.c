#include <unistd.h>
void CamToSnake(char *Str)
{
    int FirstToken = 1;
    while (*Str)
    {
        if (*Str >= 65 && *Str <= 90)
        {
            if (!FirstToken)
                write(1, "_", 1);
            *Str += 32;
        }
        write(1, Str, 1);
        Str++;
        FirstToken = 0;
    }
}
int main(int ac, char **av)
{
    if (ac == 2)
        CamToSnake(av[1]);
    write(1, "\n", 1);
}