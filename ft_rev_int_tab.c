void    ft_rev_int_tab(int  *tab, int   size)
{
    int tmp;
    int counter;
    counter =0;
    int *latter_index;
    latter_index = tab + size;

    while (counter < (size / 2))
    {
        tmp = *tab;
        *tab = *latter_index;
        *latter_index = tmp;
        tab++;
        latter_index--;
        counter++;
    }
    
}