/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ctasar <ctasar@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/28 13:46:24 by ctasar            #+#    #+#             */
/*   Updated: 2023/03/28 14:34:15 by ctasar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char *ft_strcapitalize(char *str)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 65 && str[i] <= 90)
		{
			str[i] += 32;
		}
		i++;
	}
	while (str[j] != '\0')
	{
		if (str[j] >= 65 && str[j] <= 90)
		{
			str[j] += 32;
		}
		j++;
	}

	return (str);
}

int main()
{
	char a[] = "salUt, commAnt tu vas ? 42mots quArante-Deux; cinquante+et+un";
	printf("%s", ft_strcapitalize(a));
}
