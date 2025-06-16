#include <unistd.h>
void rstr_capitalizer(char *str)
{
    int i = 0;
    while (str[i])
    {
        if ((str[i] >= 'a' && str[i] <= 'z') && str[i + 1] == ' ')
            str[i] = str[i] - 32;
        if ((str[i] >= 'A' && str[i] <= 'Z') && str[i + 1] != ' ')
            str[i] = str[i] + 32;
        write(1, &str[i], 1);
        i++;
    }
}
int main(int Ac, char **Av)
{
}