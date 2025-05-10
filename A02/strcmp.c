int ft_strcmp(char *s1, char *s2)
{
    while (*s1 && *s2 && *s1 == *s2) // Compare until there's a difference or one string ends
    {
        s1++;
        s2++;
    }
    return (*s1 - *s2); // Return the difference between the characters (or null terminator)
}
