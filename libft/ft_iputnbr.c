/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iputnbr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpoplow <mpoplow@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/27 13:06:07 by mpoplow           #+#    #+#             */
/*   Updated: 2024/11/08 14:52:42 by mpoplow          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_iputnbr(int n)
{
	if (n == 0)
	{
		if (write(1, "0", 1) == -1)
			return (-1);
		return (0);
	}
	else if (n == -2147483648)
	{
		if (write(1, "-2147483648", 11) == -1)
			return (-1);
		return (0);
	}
	if (n < 0)
	{
		n = -n;
		if (write(1, "-", 1) == -1)
			return (-1);
	}
	if (n >= 10)
		ft_iputnbr((n / 10));
	ft_putchar_fd((n % 10 + '0'), 1);
	return (0);
}

// #include <stdio.h>
// int	main(void)
// {
// 	ft_putnbr_fd(0, 1);
// 	printf("\n");
// 	ft_putnbr_fd(-1, 1);
// 	printf("\n");
// 	ft_putnbr_fd(-89, 1);
// 	printf("\n");
// 	ft_putnbr_fd(65, 1);
// 	printf("\n");
// 	ft_putnbr_fd(2147483647, 1);
// 	printf("\n");
// 	ft_putnbr_fd(-2147483648, 1);
// 	printf("\n");
// }
