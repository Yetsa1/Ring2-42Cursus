/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yeparra- <yeparra-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/23 17:18:02 by yeparra-          #+#    #+#             */
/*   Updated: 2024/02/19 17:23:58 by yeparra-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char    *read_line(int fd)
{
    static char *buffer;
    int nbytes;

    buffer = malloc(BUFFER_SIZE * sizeof(char));
    if (buffer == NULL)
        return (NULL);

    nbytes = read(fd, buffer, BUFFER_SIZE);
    if (nbytes <= 0)
    {
        free(buffer);
        return (NULL);
    }
    buffer[nbytes] = '\0';
    return (buffer);
}
char    *get_next_line(int fd)
{
    char        *line;
    char    *buffer;
    int i;
    
    buffer = read_line(fd);
    if (buffer == NULL)
        return (NULL);
    line = malloc(BUFFER_SIZE + 1);   
    if (line == NULL)
    {
        free (buffer);
        return (NULL);
    }
    i = 0;
    while (buffer[i] != '\n' && buffer[i] != '\0')
    {
        line[i] = buffer[i];
        i++;
    }
    line[i] = '\0';

    ft_memmove(buffer, buffer + i + 1, ft_strlen(buffer + i + 1) + 1);
    return (line);
}

int main(void)
{
    int     fd;
    char    *line;

    get_next_line(-4);
    fd = 0;
    if (fd == -1)
        return (-1);
    fd = open("fichero.txt", O_RDONLY);
    line = "";
    while(line != NULL)
    {
        line = get_next_line(fd);
        printf("%s\n", line);
        //free(line);
    }
    fd = close(fd);
    return (0);
}

/*read = bytes leidos  read = (fd, grabado de lectura, bytes leidos)
 = -1 cuando hubo un error de lectura
 = 0 cuando ha llegado al final del fichero*/