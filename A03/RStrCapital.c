#include <unistd.h>

void rstr_capitalizer(char *str)
{
    while (*str)
    {
        if ((*str >= 'a' && *str <= 'z') && (*(str + 1) == ' ' || *(str + 1) == '\t' || *(str + 1) == '\0'))
            *str -= 32;

        else if (*str >= 'A' && *str <= 'Z' && (*(str + 1) != ' ' && *(str + 1) != '\t' && *(str + 1) != '\0'))
            *str += 32;
        write(1, str, 1);
        ++str;
    }
}

int main(int argc, char **argv)
{
    int i;
    if (argc >= 2)
    {
        i = 1;
        while (i < argc)
        {
            rstr_capitalizer(argv[i]); // Call our function on each argument
            write(1, "\n", 1);         // Print a newline after processing each argument
            i += 1;                    // Move to the next argument
        }
    }
    else                   // If no arguments were provided
        write(1, "\n", 1); // Just print a newline

    return (0); // Return 0 to indicate successful execution
}