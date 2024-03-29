/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ctasar <ctasar@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/12 08:12:02 by ctasar            #+#    #+#             */
/*   Updated: 2023/04/12 08:12:03 by ctasar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	say;

	say = 0;
	while (str[say] != '\0')
	{
		say++;
	}
	return (say);
}

char	*ft_strcat(char *dest, char *src)

{
	int		a;
	int		b;

	a = 0;
	b = ft_strlen(dest);
	while (src[a] != '\0')
	{
		dest[a + b] = src[a];
		a++;
	}
	dest[a + b] = '\0';
	return (dest);
}
