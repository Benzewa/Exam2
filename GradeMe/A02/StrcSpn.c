#include <stddef.h>
// Counts Unmatched Characters
size_t ft_strcspn(const char *Str, const char *Charset)
{
    size_t count = 0;
    // Iterate through each character of s
    while (*Str)
    {
        const char *Bad = Charset;
        // Check if the current character of s matches any character in reject
        while (*Bad)
        {
            if (*Str == *Bad)
                return count; // If a match is found, return the count
            Bad++;
        }
        // No match found in reject, increment count and move to the next character in s
        count++;
        Str++;
    }
    return count; // If no matches are found, return the full length of s
}