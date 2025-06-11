// Bitwise Way
int IsPowerBitWise(unsigned int n)
{
    if (n == 0)
        return (0);
    return (n & (n - 1) == 0);
}

// recursive way
int IsPowerRecursive(unsigned int n)
{
    if (n == 0)
        return (0);
    if (n == 1)
        return (1);
    if (n % 2 != 0)
        return (0);
    return (IsPowerRecursive(n / 2));
}