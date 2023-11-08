/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maria-nm <maria-nm@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 17:08:55 by maria-nm          #+#    #+#             */
/*   Updated: 2023/10/01 18:44:02 by maria-nm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
/*
#include <stddef.h>
#include <string.h>
#include <stdlib.h>
#include <stdio.h>*/

/*llena una zona de memoria de tamano 'len' con un byte 'c'*/
void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	*p;
	unsigned char	uc;

	p = (unsigned char *)b;
	uc = (unsigned char)c;
	while (len > 0)
	{
		*p = uc;
		p++;
		len--;
	}
	return (b);
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
	ptr = ft_memset(b, 'b', i);
	ptr1 = memset(c, 'b', i);
	ptr[i] = '0';
	ptr1[i] = '0';
 	printf("tengo  %s\n", ptr);
 	printf("tengo  %s\n", ptr1);
	return(0);
}*/
