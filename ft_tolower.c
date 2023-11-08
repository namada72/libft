/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maria-nm <maria-nm@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 17:37:13 by maria-nm          #+#    #+#             */
/*   Updated: 2023/09/20 16:07:43 by maria-nm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
/*

#include <stdio.h>
#include <ctype.h>*/

int	ft_tolower(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		c = c + 32;
		return (c);
	}
	else
		return (c);
}
/*
int main(int argc, char **argv)
{
	char i;
	int r1;
	int r2;
	i = argv[1][0];
	r1 = ft_tolower(i);
	r2 = tolower(i);
 	printf("el caracter es %c y da  %d y su prueba %d", i , r1,r2);
	return(0);
}*/
