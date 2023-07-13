/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ctasar <ctasar@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/11 12:26:56 by ctasar            #+#    #+#             */
/*   Updated: 2023/04/11 12:51:40 by ctasar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int		faktoriyel;

	faktoriyel = 1;
	if (nb < 0)
		return (0);
	while (nb > 0)
	{
		faktoriyel = faktoriyel * nb;
		nb--;
	}
	return (faktoriyel);
}
