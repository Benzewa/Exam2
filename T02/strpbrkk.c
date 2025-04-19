#include <stdio.h>
char *strpbrk(const char *s, const char *charset)
{
    while (*s)
    {
        for (int j = 0; charset[j]; j++)
        {
            if (*s == charset[j])
                return (char *)s;
        }
        s++;
    }
    return (NULL);
}
int main()
{
    printf("%s\n", strpbrk("heanncbsdkl", "lb"));
    printf("%s", strpbrk("heanncbsdkl", "lb"));
}