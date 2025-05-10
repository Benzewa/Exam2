#include <stddef.h>

size_t ft_strcspn(const char *s, const char *reject)
{
    size_t count = 0;

    // Iterate through each character of s
    while (*s)
    {
        const char *r = reject;

        // Check if the current character of s matches any character in reject
        while (*r)
        {
            if (*s == *r)
                return count; // If a match is found, return the count
            r++;
        }

        // No match found in reject, increment count and move to the next character in s
        count++;
        s++;
    }

    return count; // If no matches are found, return the full length of s
}
