/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faljaoui <faljaoui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/08 17:20:51 by faljaoui          #+#    #+#             */
/*   Updated: 2022/06/02 12:01:57 by faljaoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// size_t	ft_nb_len(int n)
// {
// 	size_t	len;

// 	if (n == 0)
// 		return (1);
// 	len = 0;
// 	if (n < 0)
// 		len++;
// 	while (n)
// 	{
// 		n = n / 10;
// 		len++;
// 	}
// 	return (len);
// }

int	ft_putnbr2(int nb)
{
	if (nb == -2147483648)
	{
		return (ft_putstr("-2147483648"));
	}
	if (nb < 0)
	{
		ft_putchar('-');
		nb = -1 * nb;
	}
	if (nb > 9)
	{
		ft_putnbr(nb / 10);
	}
	ft_putchar((nb % 10) + 48);
	return (0);
}

int	ft_putnbr(int nb)
{
	ft_putnbr2(nb);
	return (ft_nb_len(nb));
}
