void print_bits(unsigned char octet)
{
    int i = 8;
    unsigned char bit;

    while (i--)
    {
        bit = (octet >> i & 1) + '0'; // Shift the bit and convert it to '0' or '1'
        write(1, &bit, 1);            // Write the bit as a character
    }
}
