/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strlcpy.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ctasar <ctasar@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/28 15:51:48 by ctasar            #+#    #+#             */
/*   Updated: 2023/03/29 12:41:05 by ctasar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

unsigned int ft_strlcpy(char *dest, char *src, unsigned int size)
{
	int	i;
	int j;

	i = 0;
	j = 0;
	while (dest[i] != '\0')
		i++;
	while (j < (size-1) && src[j] != '\0')
	{
		dest[i + j] = src[j];
		j++;
	}
	dest[i + j] = '\0';

	i = 0;
	while (src[i])
		i++;

    printf("%s\n",dest);
    printf("%s\n",src);
	return (i);
}

int main()
{
	char a[15]; 
	char b[] = "ydgsfsfdsg"; 
	printf("%u", ft_strlcpy(a,b,3));
    printf("%lu", strlcpy(a,b,12));
	
	return 0;
}