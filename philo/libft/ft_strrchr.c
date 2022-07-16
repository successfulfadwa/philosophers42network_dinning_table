/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faljaoui <faljaoui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/13 02:52:59 by faljaoui          #+#    #+#             */
/*   Updated: 2022/01/03 22:59:13 by faljaoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	i;

	i = ft_strlen (s);
	while (i >= 0)
	{
		if (s[i] == (unsigned char)c)
			return ((char *) s + i);
		i--;
	}
	return (0);
}
