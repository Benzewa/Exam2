#include <unistd.h>
void WdMatch(char *Str1, char *Str2)
{
    int i = 0;
    int j = 0;
    while (Str2[j])
    {
        if (Str1[i] == Str2[j])
            i++;
        j++;
        if (Str1[i] == '\0')
        {
            i = 0;
            while (Str1[i])
            {
                write(1, &Str1[i], 1);
                i++;
            }
        }
    }
    write(1, "\n", 1);
}
int main()
{
    WdMatch("abc", "1a2b33c"); // Output: abc
}