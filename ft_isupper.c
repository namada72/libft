/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maria-nm <maria-nm@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 17:16:19 by maria-nm          #+#    #+#             */
/*   Updated: 2023/09/14 17:20:23 by maria-nm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
#include <stdio.h>
#include <ctype.h>*/

int	ft_isupper(char c)
{
	if (c >= 'A' && c <= 'Z')
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
	r1 = ft_isupper(i);
	r2 = isupper(i);
 	printf("el caracter es %c y da  %d y su prueba %d", i , r1,r2);
	return(0);
}*/
