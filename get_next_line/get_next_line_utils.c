/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yeparra- <yeparra-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/23 17:18:17 by yeparra-          #+#    #+#             */
/*   Updated: 2024/02/16 13:18:23 by yeparra-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

int	ft_strlen(const char *s)
{
	int	i;

	i = 0;
	while (s[i] != '\0')
		i++;
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
size_t	ft_strcpy(char *s, char *ct, size_t n)
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

void	*ft_memmove(void *s, const void *ct, size_t n)
{
	unsigned char	*dst;
	unsigned char	*src;
	size_t			i;

	dst = (unsigned char *)s;
	src = (unsigned char *)ct;
	i = 0;
	if ((dst == src) || (n == 0))
	{
		return (dst);
	}
	if (dst > src)
	{
		while (n-- > 0)
			dst[n] = src[n];
	}
	else
	{
		while (i < n)
		{
			dst[i] = src[i];
			i++;
		}
	}
	return (dst);
}