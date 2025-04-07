void ft_putstr(char *str);
int main()
{
    ft_putstr("Moutaz Sami");
}
#include <unistd.h>
void ft_putstr(char *str)
{
    while (*str)
    {
        write(1, str, 1);
        str++;
    }
}