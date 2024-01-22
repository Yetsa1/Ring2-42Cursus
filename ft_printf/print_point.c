/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yeparra- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/13 11:55:55 by yeparra-          #+#    #+#             */
/*   Updated: 2024/01/22 16:16:51 by yeparra-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	print_point(unsigned long long point, int *count)
{
	*count = *count + write(1, "0x", 2);
	ft_print_x(point, HEXA_MIN, count);
}
/*
int main()
{
    int i = 0;
    unsigned long long prueba = 719;
    print_point(prueba, &i);
    return (0);
}*/
