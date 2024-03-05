int	ft_atoi(const char *str)
{
    int nbr;
    int sign;


    nbr = 0;
    sign = 1;
    while (*str)
    {
        if (*str == '-' || *str == '+'){
            if (*str == '-')
                sign = -1;
            str++;
        }
        if (*str >= '0' && *str <= '9')
            nbr = (nbr * 10) + (*str - '0');
        else
            return (nbr * sign);
        str++;
    }
    return (nbr * sign);
}
