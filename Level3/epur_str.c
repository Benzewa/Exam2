#include <unistd.h>
void epur_str(char *str)
{
    int i = 0;
    int Flag = 0;
    while (str[i] == ' ' || str[i] == '\t')
        i++;
    while (str[i])
    {
        if (str[i] == ' ' || str[i] == '\t')
            Flag = 1;
        if (str[i] != ' ' && str[i] != '\t')
        {
            if (Flag)
                write(1, " ", 1);
            Flag = 0;
            write(1, &str[i], 1);
        }
        i++;
    }
}
int main(int Ac, char **Av)
{
    if (Ac == 2)
        epur_str(Av[1]);
    write(1, "\n", 1);
}
// passed myself