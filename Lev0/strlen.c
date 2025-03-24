int ft_strlen(char *str)
{
    int Counter = 0;
    while (*(str++) != '\0')
    {
        Counter += 1;
    }
    return (Counter);
}
#include <stdio.h>
int main()
{
    char *str = "Hello";
    printf("%d ", ft_strlen(str));
}