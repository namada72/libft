/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maria-nm <maria-nm@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 16:40:26 by maria-nm          #+#    #+#             */
/*   Updated: 2023/10/01 18:27:14 by maria-nm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"/*

#include <string.h>
#include <stdio.h>
#include <stdlib.h>*/

/*copia una zona de memoria a otra byte a byte, con una longitud maxima len
 * incluso si se solapan*, esto se comprueba con :
 * si dst<src == no se solapan las areas de memoria
 * else == se solapan, por eso la copia se hace desde atras
 * para evitar que los datos se sobreescriban antes de uso*/
void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t			i;
	unsigned char	*dstc;

	dstc = (unsigned char *)dst;
	i = 0;
	if (dst == src || len == 0)
		return (dst);
	if (dst < src)
	{
		while (i < len)
		{
			dstc[i] = ((const unsigned char *)src)[i];
			i++;
		}
	}
	else
	{
		i = len - 1;
		while (i < len)
		{
			dstc[i] = ((const unsigned char *)src)[i];
			i--;
		}
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
    char *destino1 = argv[1];
    const char *origen1 = argv[2];
    char *destino2 = argv[1];
	const char *origen2 = argv[2];
    
	
    printf("cadena destino inicial %s\n",argv[1]);
	ft_memmove(destino1, origen1, i);
	memmove(destino2, origen2, i);

    
    printf("Copiando %zu bytes desde \"%s\"obtengo \"%s\"\n"
	,i,origen1, destino1);
    printf("Copiando %zu bytes desde \"%s\"obtengo \"%s\"\n"
	,i,origen2, destino2);
    return 0;
}*/
