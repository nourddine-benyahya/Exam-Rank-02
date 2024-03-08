#include <unistd.h>
#include <stdio.h>

#include "list.h"

t_list	*sort_list(t_list* lst, int (*cmp)(int, int))
{
    t_list	*tmp;
    int		swap;

    tmp = lst;
    while (lst)
    {
        if (lst->next && !(*cmp)(lst->data, lst->next->data))
        {
            swap = lst->data;
            lst->data = lst->next->data;
            lst->next->data = swap;
            lst = tmp;
        }
        else
            lst = lst->next;
    }
    return (tmp);
}