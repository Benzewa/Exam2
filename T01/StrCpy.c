char *strcpy(char *dst, const char *src);
#include <stdio.h>
int main()
{
    const char *Src = "Moutaz Sami Shaban    ";
    char Dst[50] = {0};
    printf("Str Dest : %s\n", strcpy(Dst, Src));
}
char *strcpy(char *dst, const char *src)
{
    int i = 0;
    while (src[i])
    {
        dst[i] = src[i];
        i++;
    }
    dst[i] = '\0';
    return (dst);
}