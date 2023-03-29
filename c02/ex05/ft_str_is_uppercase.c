/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ctasar <ctasar@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/28 11:13:28 by ctasar            #+#    #+#             */
/*   Updated: 2023/03/29 10:34:58 by ctasar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_uppercase(char *str)
{
	int	i;
	int	kontrol;

	i = 0;
	kontrol = 0;
	while (str [i] != '\0')
	{
		if (str[i] >= 65 && str[i] <= 90)
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

int	main ()
{
	char a[] ="SFDHDS21321FDJDSFL";
	printf("%d", ft_str_is_uppercase(a));
}
