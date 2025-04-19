#include <stdlib.h>
size_t strcspn(const char *s, const char *charset)
{
    int i = 0;
    while (s[i])
    {
        for (size_t j = 0; charset[j]; j++)
        {
            if (s[i] == charset[j])
                return (i);
        }
        i++;
    }
    return (i);
}
#include <stdio.h>
int main()
{
    printf("%zu\n", strcspn("Hello", ""));
    printf("%zu\n", strcspn("abcdef", "xyz"));
    printf("%zu\n", strcspn("123abc", "c1"));
}