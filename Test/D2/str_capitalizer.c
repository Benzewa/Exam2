#include <unistd.h>
void str_capitalizer(char *str)
{
    int i = 0;
    if (str[i] >= 'a' && str[i] <= 'z')
        str[i] = str[i] - 'a';
    write(1, &str[i], 1);
    i++;

    while (*str)
    {
        if (str[i] >= 'a' && str[i] <= 'z' && str[i - 1] == ' ')
            str[i] = str[i] - 32;
        else if (str[i] >= 'A' && str[i] <= 'Z')
            str[i] = str[i] + 32;
        write(1, &str[i], 1);
        i++;
    }
}