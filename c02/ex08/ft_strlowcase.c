/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ctasar <ctasar@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/28 16:18:44 by ctasar            #+#    #+#             */
/*   Updated: 2023/03/28 17:11:59 by ctasar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char *ft_strlowcase(char *str)
{
	int	i;
	int	kontrol;

	i = 0;
	kontrol = 0;
	while (str [i] != '\0')
	{
		if (str[i] >= 65 && str[i] <= 90)
		{
			str[i] += 32;
		}
		
		i++;
	}
	return (str);
}

int	main()
{
	char a[] = "abcAAWHUHIUGIJMIOMdefg";
	printf("%s",ft_strlowcase(a));
}
