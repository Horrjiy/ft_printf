/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_hexc.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpoplow <mpoplow@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 15:12:54 by mpoplow           #+#    #+#             */
/*   Updated: 2024/11/07 16:31:00 by mpoplow          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	edgecase(int n)
{
	if (n == 0)
	{
		write(1, "0", 1);
		return ;
	}
	else
	{
		write(1, "-80000000", 9);
		return ;
	}
}

static void	ft_puthexc(int n)
{
	char	*str;

	str = "0123456789ABCDEF";
	write(1, &str[n], 1);
}

void	ft_putnbr_hexc(int n)
{
	if (n == 0 || n == -2147483648)
		return (edgecase(n));
	if (n < 0)
	{
		n = -n;
		write(1, "-", 1);
	}
	if (n >= 16)
		ft_putnbr_hexc((n / 16));
	ft_puthexc((n % 16));
}
