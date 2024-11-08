/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstrstr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpoplow <mpoplow@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 00:26:52 by mpoplow           #+#    #+#             */
/*   Updated: 2024/10/28 00:34:57 by mpoplow          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putstrstr(char **s)
{
	int	i;
	int	f;

	i = 0;
	f = 0;
	while (s[f])
	{
		i = 0;
		while (s[f][i])
		{
			write(1, &s[f][i], 1);
			i++;
		}
		write(1, "\n", 1);
		f++;
	}
}

// int	main(void)
// {
// 	char **test;
// 	test[0] = "_=-_+_=-=_=--=";
// 	test[1] = "123456";
// 	test[2] = "Auer Mauer Bauer";
// 	test[3] = "Scheich";
//     test[4] = NULL;
// 	ft_putstrstr(test);
//     return(0);
// }