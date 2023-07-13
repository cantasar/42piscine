/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ctasar <ctasar@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/06 20:05:52 by ctasar            #+#    #+#             */
/*   Updated: 2023/04/06 22:35:54 by ctasar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char *str)
{
	int	i;
	int	np_check;
	int	number;

	i = 0;
	np_check = 1;
	number = 0;
	while (str[i] == ' ' || str[i] == '\f'
		|| str[i] == '\t' || str[i] == '\r'
		|| str[i] == '\n' || str[i] == '\v')
		i++;
	while (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			np_check = -1 * np_check;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		number = number * 10;
		number = number + (str[i] - 48);
		i++;
	}
	return (np_check * number);
}
