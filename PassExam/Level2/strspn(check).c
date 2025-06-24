#include <unistd.h>
size_t ft_strspn(const char *s, const char *accept)
{
    int i = 0;
    int j = 0;
    int check;

    while (s[i])
    {
        j = 0;
        check = 0;
        while (accept[j])
        {
            if (s[1] == accept[j])
                check = 1;
            j++;
        }
        if (check == 0)
            return (i);
        i++;
    }
    return (i);
}
