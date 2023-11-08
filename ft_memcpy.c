/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maria-nm <maria-nm@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 13:45:01 by maria-nm          #+#    #+#             */
/*   Updated: 2023/10/01 16:53:24 by maria-nm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
/*
#include <string.h>
#include <stdio.h>
#include <stdlib.h>*/

/*copia una zona de memoria a otra byte a byte con un max. de n bytes*/
void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t			i;
	unsigned char	*dstc;

	if (!dst && !src && n)
		return (dst);
	dstc = (unsigned char *)dst;
	i = 0;
	while (i < n)
	{
		dstc[i] = ((const unsigned char *)src)[i];
		i++;
	}
	return (dst);
}
/*
int main(int argc, char **argv)
{
	if (argc < 4) {
        printf("Uso: %s <destino> <origen> <tamaño>\n", argv[0]);
        return 1;
    }

    size_t i = (size_t)atoi(argv[3]);
    char *destino = argv[1];
    const char *origen = argv[2];

    ft_memcpy(destino, origen, i);
    
    printf("Copiando %zu bytes desde \"%s\" a \"%s\" obtengo \"%s\"\n",
   	i, origen, destino, destino);
    
    return 0;
}*/
