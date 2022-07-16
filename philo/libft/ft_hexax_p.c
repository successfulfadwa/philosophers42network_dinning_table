/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hexax_p.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faljaoui <faljaoui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/11 15:35:26 by faljaoui          #+#    #+#             */
/*   Updated: 2022/06/02 11:31:58 by faljaoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	hexa_len(unsigned long int nb)
{
	int	len;

	len = 0;
	if (nb == 0)
		return (3);
	while (nb)
	{
		nb = nb / 16;
		len++;
	}
	return (len +2);
}

void	print_hexa_nb(unsigned long int nb, char *base)
{
	if (nb >= 16)
	{
		print_hexa_nb(nb / 16, base);
		print_hexa_nb(nb % 16, base);
	}
	else
	{
		ft_putchar(base[nb]);
	}
}

int	ft_hexax_p(unsigned long int nb, char *base)
{
	ft_putstr("0x");
	print_hexa_nb(nb, base);
	return (hexa_len(nb));
}
