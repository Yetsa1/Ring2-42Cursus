/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_u.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yeparra- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/13 11:55:55 by yeparra-          #+#    #+#             */
/*   Updated: 2024/01/22 16:20:24 by yeparra-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	print_u(unsigned int digit, int *count)
{
	char	c;

	if (digit >= 10)
	{
		print_u(digit / 10, count);
	}
	c = digit % 10 + '0';
	write(1, &c, 1);
	*count = *count + 1;
}
/*
int main()
{
    int number = 123;
    print_u(number);
    return (0);
}*/
