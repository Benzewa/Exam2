#include <stdio.h>
#include <stdlib.h>

void doop(int a, char c, int b)
{
    if (c == '+')
        printf("%d\n", a + b);
    else if (c == '-')
        printf("%d\n", a - b);
    else if (c == '*')
        printf("%d\n", a * b);
    else if (c == '/')
        if (b != 0) // Prevent division by zero
            printf("%d\n", a / b);
        else
            printf("Error: Division by zero\n");
    else if (c == '%')
        if (b != 0) // Prevent modulo by zero
            printf("%d\n", a % b);
        else
            printf("Error: Modulo by zero\n");
}

int main(int ac, char **av)
{
    if (ac == 4) // Exactly three arguments
    {
        doop(atoi(av[1]), av[2][0], atoi(av[3]));
    }
    else
    {
        printf("\n"); // Output just a newline if there aren't exactly 3 arguments
    }

    return 0;
}
