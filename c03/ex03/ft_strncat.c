/* ************************************************************************** */
/*																			*/
/*														:::	  ::::::::   */
/*   ft_strncat.c									   :+:	  :+:	:+:   */
/*													+:+ +:+		 +:+	 */
/*   By: ctasar <ctasar@student.42.fr>			  +#+  +:+	   +#+		*/
/*												+#+#+#+#+#+   +#+		   */
/*   Created: 2023/04/04 17:27:30 by ctasar			#+#	#+#			 */
/*   Updated: 2023/04/06 23:06:53 by ctasar		   ###   ########.fr	   */
/*																			*/
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

#include <stdio.h>
#include <string.h>

int main()
{
	char a[] = "hcnsjdc";
	char a1[] = "hcnsjdc";
	char b[] = "abcdefg";
	char b1[] = "abcdefg";
	printf("%s\n",ft_strncat(a,b,3));
	printf("%s\n",strncat(a1,b1,3));
	return 0;
}
