unsigned int    lcm(unsigned int a, unsigned int b)
{
    unsigned int c = (a >= b) ? a : b;

    while (1)
    {
        if (c % b == 0 && c % a == 0)
            return (c);
        c++;
    }
}