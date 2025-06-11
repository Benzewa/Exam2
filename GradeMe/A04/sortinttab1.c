void sort_int_tab(int *tab, unsigned int size)
{
    int i = 0;
    int temp;

    int Len = size - 1;
    while (i < Len)
    {
        if (tab[i] > tab[i + 1])
        {
            temp = tab[i];
            tab[i] = tab[i + 1];
            tab[i + 1] = temp;
            i = 0;
        }
        else
            i++;
    }
}
