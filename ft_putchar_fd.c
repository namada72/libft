/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maria-nm <maria-nm@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/28 16:01:31 by maria-nm          #+#    #+#             */
/*   Updated: 2023/09/28 16:37:17 by maria-nm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*
#include <stdio.h>
#include <unistd.h>*/

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}
/*
int main()
{
    int fd = 1; // Descriptor de archivo estándar de salida (stdout)
    char c = 'A';

    printf("Escribiendo el carácter '%c' en 
	el descriptor de archivo %d...\n", c, fd);

    ft_putchar_fd(c, fd);

    printf("Carácter escrito en el descriptor de archivo %d.\n", fd);

    return 0;
}*/
