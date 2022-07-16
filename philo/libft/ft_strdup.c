/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faljaoui <faljaoui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/19 17:08:13 by faljaoui          #+#    #+#             */
/*   Updated: 2022/01/03 22:57:21 by faljaoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(char *src)
{
	char	*new_string;
	int		i;
	int		len;

	i = 0;
	len = 0;
	while (src[len])
		len++;
	new_string = malloc(sizeof(char) * (len + 1));
	if (!new_string)
		return (NULL);
	while (src[i] != '\0')
	{
		new_string[i] = src[i];
		i++;
	}
	new_string[i] = '\0';
	return (new_string);
}
