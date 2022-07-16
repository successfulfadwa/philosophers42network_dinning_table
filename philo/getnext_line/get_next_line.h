/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faljaoui <faljaoui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/17 03:52:33 by faljaoui          #+#    #+#             */
/*   Updated: 2022/06/02 14:07:48 by faljaoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include <unistd.h>
# include <stdio.h>
# include <stdlib.h>
# include <fcntl.h>
# define BUFFER_SIZE 1

int		ft_is_nwlin(const char *s);
char	*ft_get_line(char *str, char *temb_st);
char	*get_next_line(int fd);
char	*ft_strjoinn(char *left_str, char *buff);

#endif
