#include <unistd.h>

void print_bits(unsigned char octet)
{
    int i;

    i = 7;
    while (i >= 0)
    {
        // Check if the i-th bit is set and write the corresponding '1' or '0'
        if ((octet >> i) & 1)
            write(1, "1", 1);
        else
            write(1, "0", 1);
        i--;
    }
}
int main()
{
    unsigned char test_octet = 5; // You can change this value to test other numbers.

    // Call the function to print the bits of test_octet
    print_bits(test_octet);

    // Print a newline at the end for readability
    write(1, "\n", 1);

    return 0;
}