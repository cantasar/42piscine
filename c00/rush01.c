/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ctasar <ctasar@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/25 13:30:59 by ctasar            #+#    #+#             */
/*   Updated: 2023/03/25 17:34:01 by ctasar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char a);

void	ilk(int g)
{
	int i;

	i = 1;
	while (i <= g)
	{
		if (i == 1)
			ft_putchar('/');
		else if (i == g)
			ft_putchar(92);
		else
			ft_putchar('*');
		i++;
	}
	ft_putchar('\n');
}

void	son(int g)
{
	int i;

	i = 1;
	while (i <= g)
	{
		if (i == 1)
			ft_putchar(92);
		else if (i == g)
			ft_putchar('/');
		else
			ft_putchar('*');
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
			ft_putchar('*');
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
		if (str == 1)
			ilk(g);
		else if(str == u)
            son(g);
        else
			ara(g);
		str++;
	}
}
