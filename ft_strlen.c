/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maria-nm <maria-nm@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/06 16:20:36 by maria-nm          #+#    #+#             */
/*   Updated: 2023/09/20 16:01:29 by maria-nm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
/*
#include <unistd.h>
#include <stdio.h>
#include <string.h>*/

size_t	ft_strlen(const char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}
/*
int main(int argc, char **argv)
{
	size_t	i;
	size_t	j;
	i = ft_strlen(argv[1]);
	j = strlen(argv[1]);

	printf("la longitud de %s es %zu\n", argv[1], i);
	printf("la longitud de %s es %zu\n", argv[1], j);
	return(0);
}*/
