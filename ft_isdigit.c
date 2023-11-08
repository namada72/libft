/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maria-nm <maria-nm@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 12:59:20 by maria-nm          #+#    #+#             */
/*   Updated: 2023/09/23 18:21:57 by maria-nm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
/*
#include <stdio.h>
#include <ctype.h>*/

int	ft_isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else if (c == '\0')
		return (0);
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
	r1 = ft_isdigit(i);
	r2 = isdigit(i);
 	printf("el caracter es %c y da  %d y su prueba %d", i , r1,r2);
	return(0);
}*/
