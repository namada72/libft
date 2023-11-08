/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maria-nm <maria-nm@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/15 13:53:50 by maria-nm          #+#    #+#             */
/*   Updated: 2023/09/29 13:43:33 by maria-nm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
/*
#include <string.h>
#include <stdio.h>*/

/*Encuentra la primera aparicion de un byte en una zona de memoria*/
void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	uc;
	size_t			i;

	uc = (unsigned char)c;
	i = 0;
	while (i < n)
	{
		if (((unsigned char *)s)[i] == uc)
			return ((void *)&s[i]);
		i++;
	}
	return (NULL);
}
/*
int main ()
{
   const char str[] = {'1','2','3','4'};
   const char ch = '5';
   char *ret1;
   char *ret2;
   
   ret1 = ft_memchr(str, ch, strlen(str));
   ret2 = memchr(str, ch, strlen(str));

   
   printf("|%c| aaaaaaa - |%s|\n", ch, ret1);
   printf("|%c| aaaaaaa - |%s|\n", ch, ret2);

   return(0);
}*/
