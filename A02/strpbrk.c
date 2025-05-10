#include <stdio.h>
#include <string.h>

char *ft_strpbrk(const char *s1, const char *s2)
{
    if (!s1 || !s2)
        return NULL;

    while (*s1)
    {
        for (int i = 0; s2[i]; i++)
        {
            if (*s1 == s2[i])
                return (char *)s1;
        }
        s1++;
    }
    return NULL;
}

int main()
{
    // Test with a match
    char *result = ft_strpbrk("heanncbsdkl", "lb");
    if (result)
        printf("Custom: %s\n", result); // Expect to print the string starting from 'l'
    else
        printf("Custom: NULL\n");

    // Test with no match
    result = ft_strpbrk("heanncbsdkl", "xyz");
    if (result)
        printf("Custom: %s\n", result);
    else
        printf("Custom: NULL\n"); // Expect "NULL"

    // Test with an empty second string
    result = ft_strpbrk("heanncbsdkl", "");
    if (result)
        printf("Custom: %s\n", result);
    else
        printf("Custom: NULL\n"); // Expect "NULL"

    // Using the library function for comparison
    result = strpbrk("heanncbsdkl", "lb");
    if (result)
        printf("Library: %s\n", result); // Expect the same result
    else
        printf("Library: NULL\n");

    return 0;
}
