#include <unistd.h>

// Helper function: checks if character 'c' appears in string 'str' before position 'pos'
int is_found(char *str, char c, int pos)
{
    int i;

    i = 0;
    while (i < pos)
    {
        if (str[i] == c)
            return (1);
        i++;
    }
    return (0);
}

void ft_union(char *str1, char *str2)
{
    int i;
    int len1;

    i = 0;
    while (str1[i] != '\0')
    {
        if (!is_found(str1, str1[i], i))
            write(1, &str1[i], 1);
        i++;
    }

    len1 = i;
    i = 0;
    while (str2[i] != '\0')
    {
        if (!is_found(str1, str2[i], len1) && !is_found(str2, str2[i], i))
            write(1, &str2[i], 1);
        i++;
    }
}

int main(int ac, char **av)
{
    if (ac == 3)
        ft_union(av[1], av[2]);

    write(1, "\n", 1);
    return (0);
}