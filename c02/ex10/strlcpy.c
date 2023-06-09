/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strlcpy.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ctasar <ctasar@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/28 15:51:48 by ctasar            #+#    #+#             */
/*   Updated: 2023/03/29 17:47:57 by ctasar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

unsigned int ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	j = 0;
	while (dest[i] != '\0')
		i++;
	while (j < (size - 1) && src[j] != '\0')
	{
		dest[j] = src[j];
		j++;
	}
	dest[j] = '\0';
	i = 0;
	while (src[i])
		i++;
	return (i);
}

int main()
{
	char a[15]; 
	char b[] = "ydgsfsfdsgadsdasdas\n";
	printf("%d",ft_strlcpy(a,b,12));
	return (ft_strlcpy(a,b,12));
}