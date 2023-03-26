/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ctasar <ctasar@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/25 13:27:28 by ctasar            #+#    #+#             */
/*   Updated: 2023/03/25 13:28:24 by ctasar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char a)
{
	write(1, &a, 1);
}

void	ilkson(int g)
{
	int i;

	i = 1;
	while (i <= g)
	{
		if (i == 1)
			ft_putchar('o');
		else if (i == g)
			ft_putchar('o');
		else
			ft_putchar('-');
		i++;
	}
	ft_putchar('\n');
}

void	ara(int g)
{
	int i;

	i = 1;
	while (i <= g)
	{
		if (i == 1 || i == g)
			ft_putchar('|');
		else
			ft_putchar(' ');
		i++;
	}
	ft_putchar('\n');
}

void	rush(int g, int u)
{
	int str;

	str = 1;
	while (str <= u)
	{
		if (str == 1 || str == u)
			ilkson(g);
		else
			ara(g);
		str++;
	}
}

int		main(void)
{
	rush(20, 15);
	return (0);
}
