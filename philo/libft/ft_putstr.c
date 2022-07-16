/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faljaoui <faljaoui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/08 08:42:06 by faljaoui          #+#    #+#             */
/*   Updated: 2022/06/02 11:32:42 by faljaoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_putstr(char const *s)
{
	int	i;

	i = 0;
	if (s == NULL)
	{
		return (ft_putstr("(null)"));
	}
	if (s)
	{
		while (s[i])
		{
			write(1, s + i, 1);
			i++;
		}
	}
	return (i);
}
