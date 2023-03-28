/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ctasar <ctasar@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/28 18:18:37 by ctasar            #+#    #+#             */
/*   Updated: 2023/03/28 18:41:14 by ctasar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char a)
{
	write(1, &a, 1);
}

void ft_putstr_non_printable(char *str)
{
    int i;

    i = 0;
    while (str[i] != '\n')
    {
        if (!(str[i] >= '32' || str[i] <= '126'))
        {
            ft_putchar("\\");
            ft_putchar(str[i]);
        }
        ft_putchar(str[i]);
        i++;
    }

}

int main()
{
    ft_putstr_non_printable("ıafıdasıud\ngadsj");
}