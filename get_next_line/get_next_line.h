/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yeparra- <yeparra-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/23 17:17:51 by yeparra-          #+#    #+#             */
/*   Updated: 2024/02/16 14:26:23 by yeparra-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H
# include <stdarg.h>
# include <unistd.h>
# include <stdio.h>
# include <limits.h>
# include <fcntl.h>
# include <stdlib.h>
# include <string.h>


# ifndef BUFFER_SIZE
#  define  BUFFER_SIZE 100
# endif


char    *get_next_line(int fd);
int	ft_strlen(const char *s);
int	ft_strncmp(const char *s, const char *t, size_t n);
size_t	ft_strcpy(char *s, char *ct,  size_t n);
void	*ft_memmove(void *s, const void *ct, size_t n);

#endif
