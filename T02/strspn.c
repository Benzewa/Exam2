#include <stdio.h>
size_t strspn(const char *s, const char *charset)
{
    size_t count = 0;
    size_t i = 0;
    while (*s)
    {
        while (charset[i] && *s != charset[i])
            i++;
        if (charset[i] == '\0')
            return count;
        count++;
        i = 0;
        s++;
    }
    return (count);
}
int main()
{
    printf("%zu\n", strspn("hello", "helo")); // Expect 5
    printf("%zu\n", strspn("hello", "hel"));  // Expect 4
}