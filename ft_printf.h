/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbouissa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/04 05:05:02 by rbouissa          #+#    #+#             */
/*   Updated: 2022/11/06 15:50:35 by rbouissa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H

# define FT_PRINTF_H
# include <stdlib.h>
# include <stdio.h>
# include <stdarg.h>

int	ft_printf(const char *str, ...);
int	ft_string(char *str);
int	ft_character(char c);
int	ft_decimal(long c);
int	ft_unsigned_decimal(long c);
int	hx(char *base, unsigned int c);
int	ft_add(char *base, size_t c);

#endif
