#include <unistd.h>
void snake_to_camel(char *str)
{
    int i = 0;
    while (str[i])
    {
        if (str[i] == '_')
            str[i + 1] = str[i + 1] - 32;
        if (str[i] != '_')
            write(1, &str[i], 1);
        i++;
    }
}
int main(int Ac, char **Av)
{
    if (Ac == 2)
        snake_to_camel(Av[1]);
    write(1, "\n", 1);
    return (0);
}
// pass