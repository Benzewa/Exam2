#include <stddef.h>

size_t Matched(const char *Src, const char *Charset)
{
    size_t i = 0;
    size_t j;
    while (*Src)
    {
        j = 0;
        while (Charset[j])
        {
            if (!Charset[j] && (Charset[j] != Src[i]))
                return (i);
            j++;
        }
        i++;
    }
    return (i);
}