#include <unistd.h>

void first_word(char *s)
{
    while(*s == ' ' || *s == '\t')
        s++;
    while(*s != ' ' && *s != '\t')
        write(1,s++,1);
}
int main(int ac, char **av)
{
    if(ac == 2)
        first_word(av[1]);
    write(1,"\n",1);
}
