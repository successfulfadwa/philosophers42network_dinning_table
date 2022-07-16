/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fadwa <fadwa@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/17 03:51:29 by faljaoui          #+#    #+#             */
/*   Updated: 2022/07/16 04:44:57 by fadwa            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
#include "../philo.h"

int	ft_is_nwlin(const char *s)
{
	int	i;

	i = 0;
	while (s[i])
	{
		if (s[i] == '\n')
			return (i + 1);
		i++;
	}
	return (0);
}

char	*ft_get_line(char *str, char *temb_st)
{
	int		j;
	char	*tmp;

	j = ft_is_nwlin(str);
	if (ft_is_nwlin(str) == 0)
		temb_st[0] = '\0';
	if (ft_is_nwlin(str) > 0)
	{
		tmp = str;
		str = (char *) malloc(sizeof(char) * (j + 1));
		ft_strlcpy(str, tmp, j + 1);
		ft_strlcpy(temb_st, tmp + j, BUFFER_SIZE + 1);
		free(tmp);
	}
	return (str);
}

char	*get_next_line(int fd)
{
	static char	temb_st[BUFFER_SIZE + 1];
	char		*tmp;
	char		*str;
	char		buf[BUFFER_SIZE + 1];
	int			i;

	if (fd < 0 || BUFFER_SIZE <= 0)
		return (NULL);
	str = ft_strdup(temb_st);
	while (!ft_is_nwlin(str))
	{
		i = read(fd, buf, BUFFER_SIZE);
		if (i == 0 || i == -1)
			break ;
		buf[i] = '\0';
		tmp = str;
		str = ft_strjoinn(str, buf);
		free(tmp);
	}
	if (i == -1 || str[0] == '\0')
	{
		free(str);
		return (NULL);
	}
	return (str = ft_get_line(str, temb_st));
}
