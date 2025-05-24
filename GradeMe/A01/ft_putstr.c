#include <unistd.h>
void PutStr(char *Str)
{
    if (!Str)
        return;
    while (*Str)
    {
        write(1, Str, 1);
        Str++;
    }
}
int main()
{
    PutStr("Moutaz");
}