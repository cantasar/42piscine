/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ctasar <ctasar@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/27 18:16:02 by ctasar            #+#    #+#             */
/*   Updated: 2023/03/29 16:42:47 by ctasar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h> 

int ft_str_is_alpha(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!((str[i] >= 97 && str[i] <= 122)
				|| (str[i] >= 65 && str[i] <= 90)))
		{
			return 0;
		}
		i++;
	}

	return 1;
}

int main()
{
	char a[] = "aaaaaassssdddddf";
	printf("%d", ft_str_is_alpha(a));
}
