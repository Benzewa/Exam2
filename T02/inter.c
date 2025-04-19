#include <unistd.h>
void printCommonChar(char *FirstStr, char *SecondStr)
{
    // FirstStr = "apple"
    // SecondStr = "planet"

    char Seen[256] = {0};

    // If a character is in SecondStr is saved in the Seen Array
    while (*SecondStr)
    {
        Seen[(unsigned char)*SecondStr] = 1;
        SecondStr++;
    }
    while (*FirstStr)
    {
        if (Seen[(unsigned char)*FirstStr] == 1)
        {
            write(1, FirstStr, 1);
            Seen[(unsigned char)*FirstStr] = 0;
        }
        FirstStr++;
    }
}
int main(int argc, char **argv)
{
    if (argc == 3)
        printCommonChar(argv[1], argv[2]);
    else
        write(1, "\n", 1);
    return 0;
}