#include <stdlib.h>
size_t strspn(const char *s, const char *charset)
{
    size_t i = 0;
    size_t j = 0;
    size_t check = 0;
    while (s[i])
    {
        j = 0;
        check = 0;
        while (charset[j])
        {
            if (s[i] == charset[j])
                check++;
            j++;
        }
        if (check == 0)
            return (i);
        i++;
    }
    return (i);
}

// passed Myself