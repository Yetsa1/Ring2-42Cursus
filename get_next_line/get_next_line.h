/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yeparra- <yeparra-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/23 17:17:51 by yeparra-          #+#    #+#             */
/*   Updated: 2024/01/24 12:29:32 by yeparra-         ###   ########.fr       */
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
#  define  BUFFER_SIZE 21
# endif


size_t	ft_strlen(const	char *s);
char    *get_next_line(int fd);

#endif
