/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ctasar <ctasar@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/28 11:30:39 by ctasar            #+#    #+#             */
/*   Updated: 2023/03/29 12:59:27 by ctasar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_printable(char *str)
{
	int	i;
	int	kontrol;

	i = 0;
	kontrol = 0;
	while (str [i] != '\0')
	{
		if (str[i] >= 32 && str[i] <= 126)
		{
			kontrol++;
		}
		i++;
	}
	if (kontrol == i)
		return (1);
	else
		return (0);
}
