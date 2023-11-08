/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maria-nm <maria-nm@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 12:11:55 by maria-nm          #+#    #+#             */
/*   Updated: 2023/10/01 19:18:29 by maria-nm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
/*
#include <string.h>
#include <stdio.h>*/

/*concatena src detras de dst y devuelve la longitud total de la cadena
 * con el valor maximo limitado a dstsize*/
size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	j;
	size_t	cont_src;
	size_t	cont_dest;

	i = 0;
	j = 0;
	cont_src = ft_strlen(src);
	cont_dest = ft_strlen(dst);
	if (dstsize == 0 || cont_dest > dstsize)
		return (cont_src + dstsize);
	while (dst[i] != '\0' && i < dstsize)
	{
		i++;
	}
	while (src[j] != '\0' && i < dstsize - 1)
	{
		dst[i] = src[j];
		i++;
		j++;
	}
	dst[i] = '\0';
	return (cont_src + cont_dest);
}
/*
int main() 
{
	    char src1[] = "Martin";
	    char src2[] = "Martin";
	    char dest1[20] = "Natalia";
	    char dest2[20] = "Natalia";
		unsigned int nb;
		unsigned int size;
		unsigned int size1;

		nb = 2;
	    printf("cadena inicial %s\n cadena a copiar %s\n 
		numero de caracteres a copiar%d\n", dest1,src1, nb);
		size=ft_strlcat(dest1, src1, nb);
		size1=strlcat(dest2,src2,nb);	
	    printf("Cadena de destino: %s de tamano: %d\n ", dest1, size);
	    printf("Cadena de destino: %s de tamano: %d\n ", dest2, size1);

	    return 0;
	}
*/
