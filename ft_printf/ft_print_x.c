/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_x.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yeparra- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/13 11:55:55 by yeparra-          #+#    #+#             */
/*   Updated: 2024/01/22 15:56:19 by yeparra-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_print_x(unsigned long n, char *dictionary, int *count)
{
	char	digit;

	if (n >= 16)
	{
		ft_print_x(n / 16, dictionary, count);
		n = n % 16;
	}
	digit = dictionary[n];
	*count = *count + write(1, &digit, 1);
}
/*
int main()
{
    long    hexadecimal = 719;
    int count = 0;

    print_x(hexadecimal, HEXA_MAYUS, &count);
    return (0);
}*/
