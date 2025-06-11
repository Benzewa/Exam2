#include <unistd.h>
void CamelToSnake(char *Str)
{
    int Flag = 1;
    int i = 0;
    while (Str[i])
    {
        if (Str[i] >= 'A' && Str[i] <= 'Z')
        {
            if (!Flag)
                write(1, "_", 1);
            Str[i] = Str[i] + 32;
        }
        write(1, &Str[i], 1);
        i++;
        Flag = 0;
    }
}