/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpoplow <mpoplow@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 00:40:54 by mpoplow           #+#    #+#             */
/*   Updated: 2024/11/10 14:48:25 by mpoplow          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include "libft/libft.h"
# include <stdarg.h>
# include <stdint.h>

int	ft_printf(const char *str, ...);
int	cfound(char f, int *wrc);
int	sfound(char *f, int *wrc);
int	difound(int f, int *wrc);
int	ufound(unsigned int f, int *wrc);
int	lowxfound(int f, int *wrc);
int	capxfound(int f, int *wrc);
int	pfound(void *f, int *wrc);
int	percfound(int *wrc);

#endif