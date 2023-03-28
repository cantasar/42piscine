/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strlcpy.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ctasar <ctasar@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/28 15:51:48 by ctasar            #+#    #+#             */
/*   Updated: 2023/03/28 17:09:42 by ctasar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

unsigned int ft_strlcpy(char *dest, char *src, unsigned int size)
{
	int	i;

	i = 0;
	while (i < (size-1))
	{
		dest[i] = src[i];
		i++;
	}
    printf("%s\n",dest);
    printf("%s\n",src);
	return (i);
}

int main()
{
	char a[10];
	char b[] = "0123456789012345";
	printf("%u", ft_strlcpy(a,b,11));
    
	return 0;
}
