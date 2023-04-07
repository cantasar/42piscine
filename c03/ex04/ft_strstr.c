/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ctasar <ctasar@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/07 02:03:46 by ctasar            #+#    #+#             */
/*   Updated: 2023/04/07 02:59:38 by ctasar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char *ft_strstr(char *str, char *to_find)
{
	int i;
	int j;
	int k;

	i = 0;

	while (str[i])
	{
		j = 0;
		k = i;
		while (str[k] == to_find[j] && to_find[j])
		{
			j++;
			k++;
		}
		if (to_find[j]=='\0')
		{
			return (&str[i]);
		}
		i++;
	}
	return (0);
}

int main(int argc, char const *argv[])
{
	char a[] = "abcdefghjkl";
	char b[] = "de";
	//printf("%d\n", ft_strlen(b));
	printf("%s", ft_strstr(a, b));
}
