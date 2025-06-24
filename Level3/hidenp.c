#include <unistd.h>
int hidenp(char *str1, char *str2)
{
    int i = 0;
    int j = 0;
    while (str1[i] && str2[j])
    {
        if (str1[i] == str2[j])
            i++;
        j++;
    }
    if (str1[i] == '\0')
        write(1, "1", 1);
    else
        write(1, "0", 1);
    return (0);
}

#include <stdio.h>
int main(int Ac, char **Av)
{
    if (Ac == 3)
        hidenp(Av[1], Av[2]);
    write(1, "\n", 1);
}

// passed myself