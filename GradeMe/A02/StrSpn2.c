#include <stddef.h>
size_t StrSpn(const char *Str, const char *Charset)
{
    size_t i = 0;
    size_t j = 0;
    while (Str[i])
    {
        j = 0;
        while (Charset[j] && (Charset[j] != Str[i]))
            j++;
        if (!Charset[j])
            return (i);
        i++;
    }
    return (i);
}