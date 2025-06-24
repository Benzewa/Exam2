#include <unistd.h>

// ✅ This function is correct: checks if 'c' appears in 'str' before position 'Pos'
int Found(char *str, char c, int Pos)
{
    int i = 0;
    while (i < Pos)
    {
        if (str[i] == c)
            return (1);
        i++;
    }
    return (0);
}

void ft_union(char *str1, char *str2)
{
    int i = 0; // 🛠️ FIX: i was used uninitialized in original code — this line is the fix

    while (str1[i])
    {
        if (!Found(str1, str1[i], i))
            write(1, &str1[i], 1);
        i++;
    }

    int Len = i; // ✅ Save the length of str1 for comparison later

    i = 0;
    while (str2[i])
    {
        // ✅ Print only if not already in str1 and not previously printed from str2
        if (!Found(str1, str2[i], Len) && !Found(str2, str2[i], i))
            write(1, &str2[i], 1);
        i++;
    }
}

int main(int Ac, char **Av)
{
    if (Ac == 3)
        ft_union(Av[1], Av[2]);
    write(1, "\n", 1); // ✅ Always print newline
}
