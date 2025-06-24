#include <unistd.h>
char *strpbrk(const char *s, const char *charset)
{
    int i = 0;
    int j = 0;
    while (s[i])
    {
        while (charset[j])
        {
            if (s[i] == charset[j])
            {
                return ((char *)&s[i]);
            }
            j++;
        }
        i++;
    }
    return (NULL);
}
// char *strpbrk(const char *s, const char *charset)
// {
//     while (*s)
//     {
//         while (*charset)
//         {
//             if (*s == *charset)
//             {
//                 return (*s);
//             }
//             charset++;
//         }
//         s++;
//     }
//     return (NULL);
// }

// passed Myself