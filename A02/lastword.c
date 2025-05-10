#include <unistd.h>

void last_word(char *s)
{
    // Skip leading spaces/tabs
    while (*s == ' ' || *s == '\t')
        s++;

    // If there's no word (empty string or only spaces/tabs)
    if (*s == '\0')
    {
        write(1, "\n", 1);
        return;
    }

    // Move to the end of the string
    char *end = s;
    while (*end)
        end++;

    // Step back to find the end of the last word
    end--;

    // Skip trailing spaces/tabs
    while (end >= s && (*end == ' ' || *end == '\t'))
        end--;

    // Now move back to find the start of the last word
    char *word_end = end;
    while (word_end >= s && *word_end != ' ' && *word_end != '\t')
        word_end--;

    // Output the last word
    word_end++;
    while (word_end <= word_end + (end - word_end))
    {
        write(1, word_end, 1);
        word_end++;
    }
    write(1, "\n", 1); // Append a newline after the last word
}

int main(int ac, char **av)
{
    if (ac == 2)
    {
        last_word(av[1]);
    }
    else
    {
        write(1, "\n", 1); // If not exactly one argument, output just a newline
    }
    return 0;
}
