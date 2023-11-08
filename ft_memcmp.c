/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maria-nm <maria-nm@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 16:48:26 by maria-nm          #+#    #+#             */
/*   Updated: 2023/09/29 13:47:49 by maria-nm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
/*
#include <string.h>
#include <stdio.h>
#include <stdlib.h>*/

/* Compara dos zonas de memoria byte a byte *, devuelve 0 si son iguales
 * > 0 si s1 > s2 y < 0 si s2 > s1 */
int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t	i;

	i = 0;
	if (n == 0)
		return (0);
	while (((unsigned char *)s1)[i] == ((unsigned char *)s2)[i] && i < n - 1)
	{
		i++;
	}
	return (((unsigned char *)s1)[i] - ((unsigned char *)s2)[i]);
}
/*
int main(int argc, char **argv)
{
	if (argc < 4) {
        printf("Uso: %s <scr1> <scr2> <tamaño>\n", argv[0]);
        return 1;
    }

    size_t i = (size_t)atoi(argv[3]);
    char *scr1 = argv[1];
    char *scr2 = argv[2];
	int comp1;
	int comp2;

    comp1=ft_memcmp(scr1, scr2, i);
	comp2=memcmp(scr1,scr2,i);

	printf("%s\n comparado con %s\n es %d\n", scr1,scr2,comp1);
	printf("%s\n comparado con %s\n es %d\n", scr1,scr2,comp2);
	return (0);
}*/
