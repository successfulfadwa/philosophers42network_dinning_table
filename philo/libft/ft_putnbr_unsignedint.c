/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_unsignedint.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faljaoui <faljaoui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/12 17:06:38 by faljaoui          #+#    #+#             */
/*   Updated: 2022/06/02 11:32:33 by faljaoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

unsigned int	ft_nb_len1(unsigned int n)
{
	unsigned int	len;

	if (n == 0)
		return (1);
	len = 0;
	if (n < 0)
		len++;
	while (n)
	{
		n = n / 10;
		len++;
	}
	return (len);
}

unsigned int	ft_putnbr_unsignedint(unsigned int nb)
{
	if (nb > 9)
	{
		ft_putnbr_unsignedint(nb / 10);
	}
	ft_putchar((nb % 10) + 48);
	return (ft_nb_len1(nb));
}
