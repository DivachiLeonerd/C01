void    ft_sort_int_tab(int *tab, int   size)
{
    int tmp;
    int n;
    n = 1;
    while (n <= size-1)
    {
        if (*tab > *(tab + 1))
        {
            tmp = *tab;
            *tab = *(tab + 1);
            *(tab + 1) = tmp;
        }
        tab = tab + 1;
        n++;
    }
    
}