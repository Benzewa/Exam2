#include <unistd.h>
void str_capitalizer(char *str)
{
    int i = 0;
    int Flag = 1;
    while (str[i])
    {
        if (str[i] >= 'A' && str[i] <= 'Z')
        {
            if (Flag == 0)
                str[i] = str[i] + 32;
            Flag = 0;
        }
        else if (str[i] >= 'a' && str[i] <= 'z')
        {
            if (Flag == 1)
                str[i] = str[i] - 32;
            Flag = 0;
        }
        else
            Flag = 1;
        write(1, &str[i], 1);
        i++;
    }
}
int main(int Ac, char **Av)
{
    if (Ac == 1)
        write(1, "\n", 1);
    int i = 1;
    while (i < Ac)
    {
        str_capitalizer(Av[i]);
        write(1, "\n", 1);
        i++;
    }
}

// passed Myself