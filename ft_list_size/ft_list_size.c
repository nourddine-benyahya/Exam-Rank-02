typedef struct    s_list
{
    struct s_list *next;
    void          *data;
}                 t_list;

int	ft_list_size(t_list *begin_list)
{
    int a = 1;
    if (!begin_list)
        return (0);
    a += ft_list_size(begin_list->next);
    return (a);
}