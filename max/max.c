int		max(int* tab, unsigned int len)
{
    int res = 0;
    if (len == res)
        return (res);
    while (len--)
    {
        if (tab[len] > res)
            res = tab[len];
    }
    return (res);
}