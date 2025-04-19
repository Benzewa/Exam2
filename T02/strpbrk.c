#include <stdio.h>
char *strpbrk(const char *s, const char *charset)
{
    int i = 0;
    while (s[i])
    {
        for (int j = 0; charset[j]; j++)
        {
            if (s[i] == charset[j])
                return (char *)&s[i];
        }
        i++;
    }
    return (NULL);
}
int main()
{
    printf("%s\n", strpbrk("heanncbsdkl", "lb"));
    printf("%s", strpbrk("heanncbsdkl", "lb"));
}