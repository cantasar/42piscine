/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ctasar <ctasar@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/23 10:44:00 by ctasar            #+#    #+#             */
/*   Updated: 2023/03/23 12:57:18 by ctasar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_reverse_alphabet(void)
{
	char	tersalfabe;

	tersalfabe = 'z';
	while (tersalfabe >= 'a')
	{
		write(1, &tersalfabe, 1);
		tersalfabe--;
	}	
}
