/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_x.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faljaoui <faljaoui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/11 15:43:31 by faljaoui          #+#    #+#             */
/*   Updated: 2022/06/02 11:32:09 by faljaoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	hexa_len2(unsigned int nb)
{
	int	len;

	len = 0;
	if (nb == 0)
		return (1);
	while (nb)
	{
		nb = nb / 16;
		len++;
	}
	return (len);
}

void	print_hexa_nb1(unsigned int nb, char *base)
{
	if (nb >= 16)
	{
		print_hexa_nb1(nb / 16, base);
		print_hexa_nb1(nb % 16, base);
	}
	if (nb < 16)
	{
		ft_putchar(base[nb]);
	}
}

int	ft_print_x(unsigned int nb, char *base)
{
	print_hexa_nb1(nb, base);
	return (hexa_len2(nb));
}

// int main()
// {
//     int *y;
//     y =36999;

//     printf("%d",print_hexa_nb(55,"0123456789abcdef"));
//     return 0;
// }
