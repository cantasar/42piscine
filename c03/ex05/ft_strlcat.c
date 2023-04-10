/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ctasar <ctasar@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/10 13:09:53 by ctasar            #+#    #+#             */
/*   Updated: 2023/04/10 13:14:27 by ctasar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


unsigned int ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int i, dest_len = 0, src_len = 0;

	while (dest[dest_len] != '\0')
		dest_len++;
	while (src[src_len] != '\0')
		src_len++;
	i = 0;
	while (src[i] != '\0' && i < size - 1)
	{
		dest[dest_len + i] = src[i];
		i++;
	}
	dest[dest_len + i] = '\0';
	if (size<dest_len)
	{
		return (src_len + size);
	}
	return (dest_len + src_len);
}
