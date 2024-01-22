/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yeparra- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/11 15:37:49 by yeparra-          #+#    #+#             */
/*   Updated: 2024/01/22 15:57:55 by yeparra-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# define HEXA_MIN "0123456789abcdef"
# define HEXA_MAYUS "0123456789ABCDEF"
# include <stdarg.h>
# include <unistd.h>
# include <stdio.h>
# include <limits.h>

int		ft_printf(char const *format, ...);
void	print_char(char c, int *count);
void	ft_printstr(char *str, int *count);
void	print_digits(int digit, int *count);
void	print_u(unsigned int digit, int *count);
void	ft_print_x(unsigned long n, char *dictionary, int *count);
void	print_point(unsigned long long point, int *count);
void	ft_putchar(char c);
size_t	ft_strlen(const	char *s);

#endif
