/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ctasar <ctasar@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/28 13:46:24 by ctasar            #+#    #+#             */
/*   Updated: 2023/03/28 18:03:13 by ctasar           ###   ########.fr       */
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
			str[i] += 32;
			
        if (str[i] >= 'a' && str[i] <= 'z')
        {
            if (j == 1)
                str[i] -= 32;
                j = 0;
        }
        else if (str[i] >= '0' && str[i] <= '9')
            j = 0;
        else
            j = 1;
		
		i++;
	}

	return (str);
}

int main()
{
	char a[] = "salUt, commAnt tu vas ? 42mots quArante-Deux; cinquante+et+un";
	printf("%s", ft_strcapitalize(a));
}
