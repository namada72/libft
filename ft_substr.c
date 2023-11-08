/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maria-nm <maria-nm@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/22 12:27:35 by maria-nm          #+#    #+#             */
/*   Updated: 2023/10/03 18:11:12 by maria-nm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"/*
#include <string.h>
#include <stddef.h>
#include <stdlib.h>
#include <stdio.h>
*/

/*crea una subcadena desde la posicion 'start de la cadena 's'
 * y con una longitud 'len' reserva memoria para la cadena*/
char	*ft_substr(const char *s, unsigned int start, size_t len)
{
	size_t		len_s;
	char		*sub_s;
	size_t		i;

	if (!s)
		return (NULL);
	len_s = ft_strlen(s);
	i = 0;
	if (start >= len_s)
	{
		sub_s = ft_calloc(1, sizeof(char));
		return (sub_s);
	}
	if (len_s - start < len)
		len = len_s - start;
	sub_s = (char *)malloc((len + 1) * sizeof(char));
	if (sub_s == NULL)
		return (NULL);
	while (i < len && s[start] != '\0')
		sub_s[i++] = s[start++];
	sub_s[i] = '\0';
	return (sub_s);
}
/*
int	main(int argc, char **argv)
{
if (argc < 4) {
        printf("Uso: %s <scr1> <inicio> <tamaño>\n", argv[0]);
        return 1;
    }

    unsigned int i = (unsigned int)atoi(argv[2]);
    size_t j = (size_t)atoi(argv[3]);
    char *scr1;
	
	scr1 = ft_substr(argv[1],i,j);
	if (scr1 != NULL)
    {
        printf("Original: %s\n", argv[1]);
        printf("Duplicate1: %s\n", scr1);
        free(scr1);
		// ¡No olvides liberar la memoria cuando hayas terminado!
    }
    else
    {
        printf("La asignación de memoria ha fallado.\n");
    }

    return 0;
}*/
