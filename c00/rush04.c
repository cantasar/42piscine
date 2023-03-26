/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush04.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ctasar <ctasar@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/25 14:31:09 by ctasar            #+#    #+#             */
/*   Updated: 2023/03/25 17:30:11 by ctasar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void ft_putchar(char c);

void ilk(int g)
{
    int i;

    i = 1;
    while (i <= g)
    {
        if (i == 1)
            ft_putchar('A');
        else if (i == g)
            ft_putchar('C');
        else
            ft_putchar('B');
        i++;
    }
    ft_putchar('\n');
}

void ara(int g)
{
    int i;

    i = 1;
    while (i <= g)
    {
        if (i == 1 || i == g)
            ft_putchar('B');
        else
            ft_putchar(' ');
        i++;
    }
    ft_putchar('\n'); /* code */
}

void son(int g)
{
    int i;

    i = 1;
    while (i <= g)
    {
        if (i == 1)
            ft_putchar('C');
        else if (i == g)
            ft_putchar('A');
        else
            ft_putchar('B');
        i++;
    }
    ft_putchar('\n'); /* code */
}

void rush(int g, int u)
{
    int str;
    str = 1;

    while (str <= u)
    {
        if (str == 1)
        ilk(g);
        else if (str == u)
        son(g);
        else 
        ara(g);
        str++;
    }
}
