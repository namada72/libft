/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maria-nm <maria-nm@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 16:40:39 by maria-nm          #+#    #+#             */
/*   Updated: 2023/09/23 18:20:44 by maria-nm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
/*
#include <stdio.h>
#include <ctype.h>*/

int	ft_isprint(int c)
{
	if (c >= 32 && c <= 126)
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
	r1 = ft_isprint(i);
	r2 = isprint(i);
 	printf("el caracter es %c y da  %d y su prueba %d", i , r1,r2);
	return(0);
}*/
