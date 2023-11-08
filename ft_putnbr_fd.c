/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maria-nm <maria-nm@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/28 17:52:55 by maria-nm          #+#    #+#             */
/*   Updated: 2023/10/01 18:51:37 by maria-nm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*
#include <unistd.h>
#include <stdlib.h>
#include <limits.h>*/

/*consigo y escribo de forma recursiva los numeros si el signo*/
static void	get_number(int n, int fd)
{
	int	aux;

	if (n > 0)
	{
		if (n > 9)
			get_number(n / 10, fd);
		write(fd, &"0123456789"[n % 10], 1);
	}
	else
	{
		if (n < -9)
			get_number(n / 10, fd);
		aux = n % 10;
		write(fd, &"0123456789"[-aux], 1);
	}
}

void	ft_putnbr_fd(int n, int fd)
{
	if (INT_MIN <= n && n < 0)
		write(fd, "-", 1);
	get_number(n, fd);
}
/*
int	main(int argc, char **argv)
{
	int	c;
	int fd;

	c = atoi(argv[1]);
	fd = 1;
	ft_putnbr_fd(c,fd);
	return (0);
}*/
