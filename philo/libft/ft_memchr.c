/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faljaoui <faljaoui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/14 05:29:48 by faljaoui          #+#    #+#             */
/*   Updated: 2022/01/03 22:46:53 by faljaoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*str;
	unsigned char	char1;

	str = (unsigned char *)s;
	char1 = (unsigned char)c;
	i = 0;
	while (i < n)
	{
		if (str[i] == char1)
			return ((void *)str + i);
		i++;
	}	
	return (0);
}
