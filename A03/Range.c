#include <stdlib.h>
#include <stdio.h>

int Absolute(int Num)
{
    if (Num < 0)
        return (-Num);
    return Num;
}
int FtRange(int Start, int End)
{
    int i = 0;
    int Len = Absolute(End - Start) + 1;
    int *Ptr = malloc(Len * sizeof(*Ptr));
    if (!*Ptr)
        return (NULL);
    while (i < Len)
    {
        Ptr[i] = Start;
        if (End > Start)
            Start++;
        else
            Start--;
        i++;
    }
    return (Ptr);
}
int main()
{
    int Start = -4;
    int End = 3;
    int *Range = FtRange(Start, End);
    int *Current = Range;
    while (1)
    {
        printf("%d\n", *Current);
        if (*Current == End)
            break;
        Current++;
    }
}