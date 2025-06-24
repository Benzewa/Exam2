#include <unistd.h>
void rev_wstr(char *str)
{
    int Len = 0;
    while (str[Len])
        Len++;
    int i = Len - 1;
    while (i >= 0)
    {
        while (i >= 0 && (str[i] == ' ' || str[i] == '\t'))
            i--;
        int end = i;
        while (i >= 0 && (str[i] != ' ' && str[i] != '\t'))
            i--;
        int start = i + 1;
        while (start <= end)
        {
            write(1, &str[start], 1);
            start++;
        }
        if (i >= 0)
            write(1, " ", 1);
    }
}
int main(int Ac, char **Av)
{
    if (Ac == 2)
        rev_wstr(Av[1]);
    write(1, "\n", 1);
}
// passed Myself