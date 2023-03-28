/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ctasar <ctasar@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/28 11:30:39 by ctasar            #+#    #+#             */
/*   Updated: 2023/03/28 11:30:40 by ctasar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

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
}

int	main()
{
	char a[] = "   sasdas 23121 \n";
	printf("%d", ft_str_is_printable(a));
}
