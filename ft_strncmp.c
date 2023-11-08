/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                        :+:      :+:    :+:  */
/*                                                    +:+ +:+         +:+     */
/*   By: maria-nm <maria-nm@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/19 08:56:36 by maria-nm          #+#    #+#             */
/*   Updated: 2023/10/01 19:28:32 by maria-nm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
/*
#include <stdio.h>
#include <string.h>*/

/*compara 2 cadenas un maximo de 'n' caracteres*/
int	ft_strncmp(const char *s1, const char *s2, size_t n )
{
	unsigned int	i;
	unsigned int	j;
	unsigned char	*us1;
	unsigned char	*us2;

	us1 = (unsigned char *)s1;
	us2 = (unsigned char *)s2;
	i = 0;
	j = 0;
	if (n == 0)
		return (0);
	while (us1[i] != '\0' && us2[j] != '\0' && us1[i] == us2[j] && i < n - 1)
	{
		i++;
		j++;
	}
	return (us1[i] - us2[j]);
}
/*
int	main(int argc, char **argv)
{
	int mayor1;
	int mayor2;
	size_t n;
	
	n = 4;

	mayor1 = ft_strncmp(argv[1],argv[2],n);
	mayor2 = strncmp(argv[1],argv[2],n);
	printf("%s\n comparado con %s\n es %d\n", argv[1],argv[2],mayor1);
	printf("%s\n comparado con %s\n es %d\n", argv[1],argv[2],mayor2);
	return (0);
}*/
