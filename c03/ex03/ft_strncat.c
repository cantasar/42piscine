/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ctasar <ctasar@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/10 13:07:51 by ctasar            #+#    #+#             */
/*   Updated: 2023/04/10 13:11:39 by ctasar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, const char *src, unsigned int nb)
{
	unsigned int	l_dest;
	unsigned int	i;

	l_dest = 0;
	i = 0;
	while (dest[l_dest] != '\0')
		l_dest++;
	while (src[i] != '\0' && i < nb)
	{
		dest[l_dest] = src[i];
		l_dest++;
		i++;
	}
	dest[l_dest] = '\0';
	return (dest);
}
