#include <stddef.h>
char *Strpbrk(const char *Str, const char *Charset)
{
    int i = 0;
    int j;
    while (Str[i])
    {
        j = 0;
        while (Charset[j])
        {
            if (Str[i] == Charset[j])
                return (&Str[i]);
            j++;
        }
        i++;
    }
    return (NULL);
}
