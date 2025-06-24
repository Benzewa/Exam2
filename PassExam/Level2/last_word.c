#include <unistd.h>
void last_word(char *str)
{
    int i = 0;
    while (str[i])
        i++;
    i--;
    while (str[i] == ' ' || str[i] == '\t')
        i--;
    while (str[i] != ' ' && str[i] != '\t')
        i--;
    i++;
    while (str[i] && str[i] != ' ' && str[i] != '\t')
    {
        write(1, &str[i], 1);
        i++;
    }
}
int main(int Ac, char **Av)
{
    if (Ac == 2)
        last_word(Av[1]);
    write(1, "\n", 1);
}
// pass