/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maria-nm <maria-nm@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/28 17:19:03 by maria-nm          #+#    #+#             */
/*   Updated: 2023/09/28 17:49:43 by maria-nm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdio.h>
#include <unistd.h>*/

void	ft_putendl_fd(char *s, int fd)
{
	int	i;

	i = 0;
	while (*(s + i) != '\0')
	{
		write (fd, s + i, 1);
		i++;
	}
	write (fd, "\n", 1);
}
/*
int main(int argc, char **argv) 
{
    
	int fd;

    // Abre un archivo para escritura
    fd = open("output.txt", O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);

    // Verifica si el archivo se abrió correctamente
    if (fd == -1)
    {
        perror("Error al abrir el archivo");
        return 1; // Devuelve un código de error
    }

    ft_putendl_fd(argv[1], fd);

    // Cierra el archivo cuando hayas terminado
    close(fd);

    printf("El contenido se ha escrito en el archivo 'output.txt'.\n");

    return 0; // Devuelve éxito
}*/
