/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_hexc.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpoplow <mpoplow@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 15:12:54 by mpoplow           #+#    #+#             */
/*   Updated: 2024/11/08 22:08:50 by mpoplow          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	edgecase(int n, int *wrc)
{
	if (n == 0)
	{
		if (write(1, "0", 1) == -1)
			return (-1);
		(*wrc)++;
		return (0);
	}
	else
	{
		if (write(1, "-80000000", 9) == -1)
			return (1);
		*wrc += 9;
		return (0);
	}
}

static int	ft_puthexc(int n)
{
	char	*str;

	str = "0123456789ABCDEF";
	if (write(1, &str[n], 1) == -1)
		return (-1);
	return (0);
}

int	ft_putnbr_hexc(int n, int *wrc)
{
	if (n == 0 || n == -2147483648)
		return (edgecase(n, wrc));
	if (n < 0)
	{
		n = -n;
		if (write(1, "-", 1) == -1)
			return (-1);
	}
	if (n >= 16)
		ft_putnbr_hexc((n / 16), wrc);
	(*wrc)++;
	if (ft_puthexc((n % 16)) == -1)
		return (-1);
	return (0);
}
