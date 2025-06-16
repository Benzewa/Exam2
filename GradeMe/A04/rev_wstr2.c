#include <unistd.h>

void revStr(char *strOne)
{
    int Len = 0;
    while (strOne[Len])
        Len++;
    int i = Len - 1;
    while (i >= 0)
    {
        if (i >= 0 && (strOne[i] == ' ' || strOne[i] == '\t'))
            i--;
        if (i < 0)
            break;
        int end = i;
        while (i >= 0 && (strOne[i] != ' ' && strOne[i] != '\t'))
            i--;
        int start = i + 1;
        while (start <= end)
        {
            write(1, &strOne[start], 1);
            start++;
        }
        if (i >= 0)
            write(1, " ", 1);
    }
}

int main(int Ac, char **Av)
{
    if (Ac == 2)
        revStr(Av[1]);
    write(1, "\n", 1);
}