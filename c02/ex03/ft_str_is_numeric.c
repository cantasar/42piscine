/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ctasar <ctasar@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/28 11:12:49 by ctasar            #+#    #+#             */
/*   Updated: 2023/03/29 16:07:55 by ctasar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_numeric(char *str)
{
	int	i;
	int	kontrol;

	i = 0;
	kontrol = 0;
	while (str [i] != '\0')
	{
		if (str[i] >= 48 && str[i] <= 57)
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

int	main()
{
	char a[] = "1232dd112";
	printf("%d", ft_str_is_numeric(a));
}
