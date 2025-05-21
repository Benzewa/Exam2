#include <stdlib.h>
#include <stdio.h>
int Absolute(int Num)
{
    if (Num < 0)
        return (-Num);
    return (Num);
}
int *ReverseRange(int Start, int End)
{
    int i = 0;
    int Len = Absolute(End - Start) + 1;
    int *Ptr = malloc(Len * sizeof(*Ptr));
    if (!*Ptr)
        return (NULL);
    while (i < Len)
    {
        Ptr[i] = End;
        if (End > Start)
            End--;
        else
            End++;
        i++;
    }
    return (Ptr);
}
int main()
{
    int Start = -1;
    int End = 2;
    int *RevRange = ReverseRange(Start, End);
    int Length = Absolute(End - Start) + 1;
    for (int i = 0; i < Length; i++)
        printf("%d\n", RevRange[i]);
    free(RevRange);
    return (0);
}