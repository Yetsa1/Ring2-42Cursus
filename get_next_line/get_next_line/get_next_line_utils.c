/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yeparra- <yeparra-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/23 17:18:17 by yeparra-          #+#    #+#             */
/*   Updated: 2024/01/31 19:10:04 by yeparra-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

size_t	ft_strlen(const	char *s)
{
	int	i;

	i = 0;
	while (s[i] != '\0')
		++i;
	return (i);
}

int	ft_strncmp(const char *s, const char *t, size_t n)
{
	while (n > 0 && (*s || *t))
	{
		if (*s != *t)
		{
			return ((unsigned char)*s - (unsigned char)*t);
		}
		s++;
		t++;
		n--;
	}
	return (0);
}
size_t	ft_strcpy(char *s, const char *ct, size_t n)
{
	size_t		len;
	size_t		i;

	i = 0;
	len = ft_strlen(ct);
	if (n > 0)
	{
		while (i < n - 1 && ct[i] != '\0')
		{
			s[i] = ct[i];
			i++;
		}
		s[i] = '\0';
	}
	return (len);
}