#include <unistd.h>
int isFound(char *str, int pos, char c)
{
    int i = 0;
    while (i < pos)
    {
        if (c == str[i])
        {
            return (1);
        }
        i++;
    }
    return (0);
}

void inter(char *str1, char *str2)
{
    int i = 0;
    int j = 0;
    while (str1[i])
    {
        j = 0;
        while (str2[j])
        {
            if (str1[i] == str2[j])
            {
                if (!isFound(str1, i, str1[i]))
                {
                    write(1, &str1[i], 1);
                    break;
                }
            }
            j++;
        }
        i++;
    }
}
int main(int Ac, char **Av)
{
    if (Ac == 3)
        inter(Av[1], Av[2]);
    write(1, "\n", 1);
}

// passed myself