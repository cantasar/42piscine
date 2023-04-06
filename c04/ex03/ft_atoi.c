/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ctasar <ctasar@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/06 20:05:52 by ctasar            #+#    #+#             */
/*   Updated: 2023/04/06 22:06:19 by ctasar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char *str)
{
	int	i;
	int	isaret;
	int	sayi;

	i = 0;
	isaret = 1;
	sayi = 0;
	while (str[i] == ' ' || str[i] == '\f'
		|| str[i] == '\t' || str[i] == '\r'
		|| str[i] == '\n' || str[i] == '\v')
		i++;
	while (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			isaret = -1 * isaret;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		sayi = sayi * 10;
		sayi = sayi + (str[i] - 48);
		i++;
	}
	return (isaret * sayi);
}
