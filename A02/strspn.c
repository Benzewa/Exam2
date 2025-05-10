#include <stddef.h>

size_t ft_strspn(const char *s, const char *accept)
{
    size_t i = 0;
    size_t count = 0;

    while (*s)
    {
        while (accept[i] && *s != accept[i])
            i++;
        if (accept[i] == '\0')
            return (count);
        i = 0;
        count++;
        s++;
    }
    return (count);
}

#include <string.h>
#include <stdio.h>

int main()
{
    printf("%zu\n", ft_strspn("hello", "ashdsello"));
    printf("%zu", strspn("hello", "ashdsello"));
}
