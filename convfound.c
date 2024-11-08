/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   convfound.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpoplow <mpoplow@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 14:01:32 by mpoplow           #+#    #+#             */
/*   Updated: 2024/11/08 14:45:56 by mpoplow          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	cfound(char f)
{
	ft_putchar_fd(f, 1);
}

void	sfound(char *f)
{
	size_t	temp;

	temp = 0;
	while (f[temp])
	{
		write(1, &f[temp], 1);
		temp++;
	}
}

void	difound(int f)
{
	ft_iputnbr(f);
}

void	ufound(unsigned int f)
{
	ft_iputunbr(f);
}
