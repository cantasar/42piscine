/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ctasar <ctasar@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/28 11:12:46 by ctasar            #+#    #+#             */
/*   Updated: 2023/03/29 12:56:47 by ctasar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_lowercase(char *str)
{
	int	i;
	int	kontrol;

	i = 0;
	kontrol = 0;
	while (str [i] != '\0')
	{
		if (str[i] >= 97 && str[i] <= 122)
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
