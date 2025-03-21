char *ft_strcpy(char *dst, const char *src)
{
    while (*src)
    {
        *dst++ = *src++;
    }
    *dst = '\0';
}
int main()
{
    const char strSrc[10];
    char strDes[10];
}