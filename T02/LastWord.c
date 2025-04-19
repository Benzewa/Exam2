#include <unistd.h>
void last_word(char *s)
{
    int i = 0;
    int end;

    // ✅ Skip leading whitespace
    while (s[i] == ' ' || s[i] == '\t')
        i++;
    // ✅ If empty or only spaces, just print newline
    if (s[i] == '\0')
    {
        write(1, "\n", 1);
        return;
    }
    // Go to end of string
    while (s[i])
        i++;
    i--;
    // ✅ Skip trailing whitespace
    while (i >= 0 && (s[i] == ' ' || s[i] == '\t'))
        i--;
    end = i;
    // ✅ Find start of last word
    while (i >= 0 && s[i] != ' ' && s[i] != '\t')
        i--;
    i++;
    while (i <= end)
    {
        write(1, &s[i], 1);
        i++;
    }
    write(1, "\n", 1);
}
int main(int argc, char **argv)
{
    if (argc == 2)
        last_word(argv[1]);
    // Match behavior if not exactly one argument
    else
        write(1, "\n", 1);
    return 0;
}