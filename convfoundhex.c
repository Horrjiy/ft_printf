/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   convfoundhex.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpoplow <mpoplow@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 14:01:30 by mpoplow           #+#    #+#             */
/*   Updated: 2024/11/08 14:53:45 by mpoplow          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	lowxfound(int f)
{
	ft_putnbr_hex(f);
}

void	capxfound(int f)
{
	ft_putnbr_hexc(f);
}

void	pfound(void *f)
{
	write(1, "0x", 2);
	ft_putnbr_hex((int)f);
}
