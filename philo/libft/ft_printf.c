/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faljaoui <faljaoui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/08 05:40:38 by faljaoui          #+#    #+#             */
/*   Updated: 2022/06/02 14:02:05 by faljaoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int	i;

	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] == (unsigned char)c)
			return ((char *)&s[i]);
		i++;
	}
	return (0);
}

int	ft_printf_check(va_list list, char c)
{
	if (c == 'c')
		return (ft_putchar(va_arg(list, int)));
	if (c == 's')
		return (ft_putstr(va_arg(list, char *)));
	if (c == 'p')
		return (ft_hexax_p(va_arg(list, long int), "0123456789abcdef"));
	if (c == 'd' || c == 'i')
		return (ft_putnbr(va_arg(list, int)));
	if (c == 'u')
		return (ft_putnbr_unsignedint(va_arg(list, unsigned int)));
	if (c == 'x')
		return (ft_print_x(va_arg(list, int), "0123456789abcdef"));
	if (c == 'X')
		return (ft_print_x(va_arg(list, int), "0123456789ABCDEF"));
	if (c == '%')
		return (ft_putchar('%'));
	return (0);
}

int	ft_printf(const char *str, ...)
{
	int		i;
	int		len;
	va_list	list;

	i = 0;
	len = 0;
	va_start (list, str);
	while (str[i] != '\0')
	{
		if (str[i] == '%')
		{
			i++;
			len += ft_printf_check(list, str[i]);
			if (ft_strchr("cspdiuxX%", str[i]) == NULL)
				i--;
		}
		else
			len = len + ft_putchar(str[i]);
		i++;
	}
	va_end (list);
	return (len);
}
