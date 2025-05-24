char *StrCpy(char *Dest, char *Src)
{
    int i = 0;
    while (Src[i])
    {
        Dest[i] = Src[i];
        i++;
    }
    Dest[i] = '\0';
    return (Dest);
}