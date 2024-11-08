/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpoplow <mpoplow@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 00:40:54 by mpoplow           #+#    #+#             */
/*   Updated: 2024/11/08 14:56:45 by mpoplow          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include "libft/libft.h"
# include <stdarg.h>

int		ft_printf(const char *str, ...);
void	cfound(char f);
void	sfound(char *f);
void	difound(int f);
void	ufound(unsigned int f);
void	lowxfound(int f);
void	capxfound(int f);
void	pfound(void *f);

#endif