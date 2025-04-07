#include <stdlib.h>
#include <stdio.h>

char *ft_strdup(char *src)
{
    int i = 0;
    int length = 0;
    char *s;

    // Calculate the length of the input string
    while (src[length])
        length++;

    // Allocate memory for the new string
    s = malloc(sizeof(*s) * (length + 1)); // Fix the memory allocation here

    if (s != NULL)
    {
        // Copy the characters to the new string
        while (src[i])
        {
            s[i] = src[i];
            i++;
        }
        // Null-terminate the new string
        s[i] = '\0';
    }

    return (s);
}

int main(void)
{
    char s[17] = "hello";
    char *result = ft_strdup(s);
    printf("%s\n", result);

    // Free the allocated memory
    free(result);

    return 0;
}
