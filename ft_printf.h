/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpoplow <mpoplow@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 00:40:54 by mpoplow           #+#    #+#             */
/*   Updated: 2024/12/02 16:54:55 by mpoplow          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include "libft/libft.h"


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