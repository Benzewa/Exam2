int StrCmp(const char *Str1, const char *Str2)
{
    while (*Str1 && *Str2 && (*Str1 == *Str2))
    {
        Str1++;
        Str2++;
    }
    return (*Str1 - *Str2);
}