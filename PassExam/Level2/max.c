int max(int *tab, unsigned int len)
{
    if (len == 0)
        return (0);
    int maximum = tab[0];
    int i = 0;
    while (i <= len - 1)
    {
        if (tab[i] > maximum)
            maximum = tab[i];
        i++;
    }
    return (maximum);
}

// passed Myself