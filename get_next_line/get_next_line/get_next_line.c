/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yeparra- <yeparra-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/23 17:18:02 by yeparra-          #+#    #+#             */
/*   Updated: 2024/01/31 20:55:39 by yeparra-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char    *get_next_line(int fd)
{
    static char *buffer;
    char        *line;
    int         nbytes;
    int i;
    
    buffer = malloc(BUFFER_SIZE * sizeof(char));
    if (buffer == NULL)
        return (NULL);    
    nbytes = re
    ad(fd, buffer, 3);
    if (nbytes <= 0)
        return (NULL);
    line = malloc(BUFFER_SIZE + 1);   
    if (line == NULL)
    {
        free (buffer);
        return (NULL);
    }
    i = 0;
    while ((nbytes = read(fd, &buffer[i], 1))> 0)
    {
        if (buffer[i] == '\n')
            break;
    }
    if (nbytes <= 0 && i == 0)
    {
        free(buffer);
        free(line);
        return (NULL);
    }
    buffer[i] = '\0';
    ft_strcpy(line, buffer, BUFFER_SIZE + 1);
    free(buffer);
    return (line);
    /*i = 0; 
    while(line == "\0")
    {
        read(fd, buffer, 3);
        i++;
    }
    //line[0] = '\0';
    //bytes = read(fd, buffer, BUFFER_SIZE);    
    buffer[nbytes] = '\0';
    return (line);*/
}

int main(void)
{
    int     fd;
    char    *line;
    int count;

    count = 0;
    line = NULL;
    fd = open("fichero.txt", O_RDONLY);
    while (1)
    {
        line = get_next_line(fd);
        if (line == NULL)
            break;
        count++;
        printf("[%d]:%s\n", count, line);
        line = NULL;
    }
    close(fd);
    return (0);
}

/*read = bytes leidos  read = (fd, grabado de lectura, bytes leidos)
 = -1 cuando hubo un error de lectura
 = 0 cuando ha llegado al final del fichero*/