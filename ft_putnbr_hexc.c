/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_hexc.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpoplow <mpoplow@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 15:12:54 by mpoplow           #+#    #+#             */
/*   Updated: 2024/11/10 12:54:18 by mpoplow          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_puthexc(unsigned int cast)
{
	char	*str;

	str = "0123456789ABCDEF";
	if (write(1, &str[cast], 1) == -1)
		return (-1);
	return (0);
}

int	ft_putnbr_hexc(unsigned int n, int *wrc)
{
	unsigned long	cast;

	if (n < 0)
		cast = (unsigned long)(-n);
	else
		cast = (unsigned long)n;
	if (cast == 0)
	{
		if (write(1, "0", 1) == -1)
			return (-1);
		(*wrc)++;
		return (0);
	}
	if (cast >= 16)
	{
		if (ft_putnbr_hexc((cast / 16), wrc) == -1)
			return (-1);
	}
	(*wrc)++;
	if (ft_puthexc((cast % 16)) == -1)
		return (-1);
	return (0);
}
