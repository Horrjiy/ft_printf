/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_address.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpoplow <mpoplow@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 15:12:54 by mpoplow           #+#    #+#             */
/*   Updated: 2024/11/08 22:50:32 by mpoplow          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	edgecase(int *wrc)
{
	if (write(1, "0", 1) == -1)
		return (-1);
	(*wrc)++;
	return (0);
}

static int	ft_putad(uintptr_t n)
{
	char	*str;

	str = "0123456789abcdef";
	if (write(1, &str[n], 1) == -1)
		return (-1);
	return (0);
}

int	ft_putnbr_ad(uintptr_t n, int *wrc)
{
	if (n == 0)
		return (edgecase(wrc));
	if (n < 0)
	{
		n = -n;
		if (write(1, "-", 1) == -1)
			return (-1);
	}
	if (n >= 16)
		ft_putnbr_ad((n / 16), wrc);
	(*wrc)++;
	if (ft_putad((n % 16)) == -1)
		return (-1);
	return (0);
}
