/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printstr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yeparra- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/13 11:55:55 by yeparra-          #+#    #+#             */
/*   Updated: 2024/01/22 16:22:28 by yeparra-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_printstr(char *str, int *count)
{
	if (str == NULL)
	{
		*count = *count + write(1, "(null)", 6);
		return ;
	}
	*count = *count + ft_strlen(str);
	while (*str != '\0')
	{
		ft_putchar(*str);
		str++;
	}
}
/*
int main()
{
    char    str[] = "glugluglu";
    int counter;
    print_str(str, &counter);
    printf("%d\n", counter);
    return (0);
}*/
