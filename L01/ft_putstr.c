#include <unistd.h>
void putstr(char *s)
{
    while (*s)
    {
        write(1, s, 1);
        s++;
    }
}
int main()
{
    putstr("Moutaz");
}

// Solution 2
// #include <unistd.h>
// void putstr(char *s)
// {
//     while (*s)
//     {
//         char c = *s;
//         write(1, &c, 1);
//         s++;
//     }
// }
// int main()
// {
//     putstr("Moutaz");
// }