#include <unistd.h>
#include <stdio.h>

// void ulstr(char *Str)
// {
//     while (*Str)
//     {
//         if (*Str >= 'A' && *Str <= 'Z')
//             *Str = *Str + 32;
//         else if (*Str >= 'a' && *Str <= 'z')
//             *Str = *Str - 32;
//         write(1, Str, 1);
//         Str++;
//     }
// }

void ulstr(char *Str)
{
    int i = 0;
    while (Str[i])
    {
        if (Str[i] >= 'A' && Str[i] <= 'Z')
            Str[i] += 32;
        else if (Str[i] >= 'a' && Str[i] <= 'z')
            Str[i] -= 32;
        write(1, &Str[i], 1);
        i++;
    }
}

int main(int ac, char **av)
{
    if (ac == 2)
        ulstr(av[1]);
    write(1, "\n", 1);
}