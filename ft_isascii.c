/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maria-nm <maria-nm@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 16:06:43 by maria-nm          #+#    #+#             */
/*   Updated: 2023/09/23 18:17:26 by maria-nm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
/*
#include <stdio.h>
#include <ctype.h>*/

int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
		return (1);
	else
		return (0);
}
/*
int main(int argc, char **argv)
{
	char i;
	int r1;
	int r2;
	i = argv[1][0];
	r1 = ft_isascii(i);
	r2 = isascii(i);
 	printf("el caracter es %c y da  %d y su prueba %d", i , r1,r2);
	return(0);
}*/
