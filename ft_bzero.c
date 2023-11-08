/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maria-nm <maria-nm@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 16:08:58 by maria-nm          #+#    #+#             */
/*   Updated: 2023/09/29 12:58:58 by maria-nm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
/*
#include <stddef.h>
#include <string.h>
#include <stdlib.h>
#include <stdio.h>*/
/*Llena con \0,  n  bytes del string s, si n es 0 no hace nada
 * para que sea una byte lo aseguro convirtiendo a unsigned char*/

void	ft_bzero(void *s, size_t n)
{
	unsigned char	*p;

	p = (unsigned char *)s;
	while (n > 0)
	{
		*p = '\0';
		p++;
		n--;
	}
}
/*
int main(void)
{
	void *b;
	void *c;
	unsigned char *ptr;
	unsigned char *ptr1;
	size_t i;

	i =4;

	b = (void *)malloc(sizeof(char)*30);
	c = (void *)malloc(sizeof(char)*30);
	ft_bzero(b, i);
	bzero(c, i);
 	printf("tengo  %s\n", ptr);
 	printf("tengo  %s\n", ptr1);
	return(0);
}*/
