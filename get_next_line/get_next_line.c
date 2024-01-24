/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yeparra- <yeparra-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/23 17:18:02 by yeparra-          #+#    #+#             */
/*   Updated: 2024/01/24 13:13:43 by yeparra-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char    *get_next_line(int fd)
{
    static char *buffer;
    char        *line;
    size_t         nbytes;
    int i;
    
    nbytes = fd;
    if (buffer == NULL)
    {
        return (NULL);    
    }
    buffer = malloc((BUFFER_SIZE) * sizeof(char) + 1);
    line = ft_strlen(buffer);    
    i = 0; 
    while(line == "\0")
    {
        read(fd, buffer, nbytes);
        i++;
    }
    //line[0] = '\0';
    //bytes = read(fd, buffer, BUFFER_SIZE);    
    buffer[nbytes] = '\0';
    return (line);
}

int main(void)
{
    int     fd;
    char    *line;

    line = NULL;
    fd = open("fichero.txt", O_RDONLY);
    line = get_next_line(fd);
    printf("%s", line);
    return (0);
}

/*read = bytes leidos  read = (fd, grabado de lectura, bytes leidos)
 = -1 cuando hubo un error de lectura
 = 0 cuando ha llegado al final del fichero*/