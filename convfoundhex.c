/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   convfoundhex.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpoplow <mpoplow@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 14:01:30 by mpoplow           #+#    #+#             */
/*   Updated: 2024/11/08 22:52:09 by mpoplow          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	lowxfound(int f, int *wrc)
{
	if (ft_putnbr_hex(f, wrc) == -1)
		return (-1);
	return (0);
}

int	capxfound(int f, int *wrc)
{
	if (ft_putnbr_hexc(f, wrc) == -1)
		return (-1);
	return (0);
}

int	pfound(void *f, int *wrc)
{
	if (write(1, "0x", 2) == -1)
		return (-1);
	*wrc += 2;
	if (!f)
	{
		if (write(1, "0", 1) == -1)
			return (-1);
		(*wrc)++;
		return (0);
	}
	if (ft_putnbr_ad((uintptr_t)f, wrc) == -1)
		return (-1);
	return (0);
}
