#include <stdio.h>
size_t strspn(const char *s, const char *charset)
{
    size_t counter = 0;
    int i = 0;
    while (*s)
    {
        while (charset[i] && (*s != charset[i]))
            i++;
        if (charset[i] == '\0')
            return (counter);
        counter++;
        i = 0;
        s++;
    }
    return (counter);
}
int main()
{

    printf("%zu\n", strspn("hello", "helo")); // Expect 5
    // All characters in "hello" are in "helo" → h, e, l, l, o → count = 5

    printf("%zu\n", strspn("hello", "hel")); // Expect 4
    // h, e, l, l are in "hel", but 'o' is not → count = 4

    printf("%zu\n", strspn("hello", "abc")); // Expect 0
    // 'h' is not in "abc" → stop immediately → count = 0

    printf("%zu\n", strspn("apple", "ap")); // Expect 3
    // 'a', 'p', 'p' are in charset → 'l' is not in "ap" → stop → count = 3

    printf("%zu\n", strspn("12345abc", "1234567890")); // Expect 5
    // First 5 chars are digits → match all in charset → 'a' breaks the chain

    printf("%zu\n", strspn("abcde", "edcba")); // Expect 5
    // All characters of "abcde" are in "edcba" → order doesn't matter → count = 5

    printf("%zu\n", strspn("test123", "abcdefghijklmnopqrstuvwxyz")); // Expect 4
    // 't', 'e', 's', 't' are letters → match → '1' breaks the chain

    printf("%zu\n", strspn("", "abc")); // Expect 0
    // Empty string → no characters to check → count = 0

    printf("%zu\n", strspn("data", "")); // Expect 0
    // Charset is empty → no character can ever match → count = 0

    printf("%zu\n", strspn("aaaaabbbb", "a")); // Expect 5
    // All 'a' at start are valid → stops when it hits 'b' → count = 5

    return 0;
}
