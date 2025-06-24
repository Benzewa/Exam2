#include <stdlib.h>

char **ft_split(char *str)
{
    int i = 0;
    int j = 0;
    int k;
    while (str[i] == ' ' || str[i] == '\t')
        i++;
    char **split = malloc(1024);
    while (str[i])
    {
        if (str[i] > ' ')
        {
            k = 0;
            split[j] = malloc(1024);
            while (str[i] > ' ')
            {
                split[j][k] = str[i];
                i++;
                k++;
            }
            split[j][k] = '\0';
            j++;
        }
        else
            i++;
    }
    split[j] = 0;
    return (split);
}

// pass