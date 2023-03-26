/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush04.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ctasar <ctasar@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/25 14:31:09 by ctasar            #+#    #+#             */
/*   Updated: 2023/03/25 15:25:03 by ctasar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_printchar(char c)
{
    write(1, &c, 1);
}

void ilk(int g)
{
    int i;

    i = 1;
    while (i <= g)
    {
        if (i == 1)
            ft_printchar('A');
        else if (i == g)
            ft_printchar('C');
        else
            ft_printchar('B');
        i++;
    }
    ft_printchar('\n');
}

void ara(int g)
{
    int i;

    i = 1;
    while (i <= g)
    {
        if (i == 1 || i == g)
            ft_printchar('B');
        else
            ft_printchar(' ');
        i++;
    }
    ft_printchar('\n'); /* code */
}

void son(int g)
{
    int i;

    i = 1;
    while (i <= g)
    {
        if (i == 1)
            ft_printchar('C');
        else if (i == g)
            ft_printchar('A');
        else
            ft_printchar('B');
        i++;
    }
    ft_printchar('\n'); /* code */
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

int main(void)
{
    rush(43, 12);
    return (0);
}