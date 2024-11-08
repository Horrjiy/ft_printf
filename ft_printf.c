/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpoplow <mpoplow@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 13:28:07 by mpoplow           #+#    #+#             */
/*   Updated: 2024/11/08 14:51:28 by mpoplow          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	percentage(const char *str, va_list arglist, int i)
{
	(i)++;
	if (str[i] == '\0')
		return (-1);
	else if (str[i] == 'c')
		cfound(va_arg(arglist, int));
	else if (str[i] == 's')
		sfound(va_arg(arglist, char *));
	else if (str[i] == 'd' || str[i] == 'i')
		difound(va_arg(arglist, int));
	else if (str[i] == 'u')
		ufound(va_arg(arglist, unsigned int));
	else if (str[i] == 'x')
		lowxfound(va_arg(arglist, int));
	else if (str[i] == 'X')
		capxfound(va_arg(arglist, int));
	else if (str[i] == 'p')
		pfound(va_arg(arglist, void *));
	else if (str[i++] == '%')
		write(1, "%%", 1);
	else
		return (-1);
	return (i);
}

int	ft_printf(const char *str, ...)
{
	va_list	arglist;
	int		i;

	va_start(arglist, str);
	i = 0;
	while (str[i])
	{
		if (str[i] == '%')
		{
			i = percentage(str, arglist, i);
			if (i == -1)
				return (-1);
		}
		else if (write(1, &str[i], 1) == -1)
			return (-1);
		i++;
	}
	va_end(arglist);
	return (i);
}
