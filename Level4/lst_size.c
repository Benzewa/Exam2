#include "ft_list_size.h"
int ft_list_size(t_list *begin_list)
{
    if (begin_list == 0)
        return (0);
    return (1 + ft_list_size(begin_list->next));
}