/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yeparra- <yeparra-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/23 17:17:51 by yeparra-          #+#    #+#             */
/*   Updated: 2024/01/31 20:30:01 by yeparra-         ###   ########.fr       */
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


# ifndef BUFFER_SIZE
#  define  BUFFER_SIZE 30
# endif


char    *get_next_line(int fd);
size_t	ft_strlen(const	char *s);
int	ft_strncmp(const char *s, const char *t, size_t n);
size_t	ft_strcpy(char *s, const char *ct,  size_t n);

#endif
