/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpoplow <mpoplow@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 00:40:54 by mpoplow           #+#    #+#             */
/*   Updated: 2024/11/08 12:39:04 by mpoplow          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ft_printf_h
# define ft_printf_h
# include "libft/libft.h"
# include <stdarg.h>

int	ft_printf(const char *str, ...);
int	cfound(char f, int *i);
int	sfound(char *f, int *i);
int	ufound(unsigned int f, int *i);
int	difound(int f, int *i);
int	ifound(int f, int *i);
int	lowxfound(int f, int *i);
int	capxfound(int f, int *i);
int	pfound(void *f, int *i);

#endif