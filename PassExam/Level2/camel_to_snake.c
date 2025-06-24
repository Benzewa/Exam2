#include <unistd.h>
void camel_to_snake(char *str)
{
    int i = 0;
    while (str[i])
    {
        if (str[i] >= 'A' && str[i] <= 'Z')
        {
            str[i] = str[i] + 32;
            write(1, "_", 1);
        }
        write(1, &str[i], 1);
        i++;
    }
}
int main(int Ac, char **Av)
{
    if (Ac == 2)
        camel_to_snake(Av[1]);
    write(1, "\n", 1);
    return (0);
}
// pass