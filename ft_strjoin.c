/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maria-nm <maria-nm@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/22 14:14:38 by maria-nm          #+#    #+#             */
/*   Updated: 2023/10/03 17:53:26 by maria-nm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"/*
#include <string.h>
#include <stddef.h>
#include <stdlib.h>
#include <stdio.h>*/

/* concatena la cadena 's2' detras de la 's1' y reserva memoria*/
char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*dest;
	int		i;
	int		j;

	i = 0;
	j = 0;
	if (!s1 || !s2)
		return (NULL);
	dest = (char *)malloc((ft_strlen(s1) + ft_strlen(s2) + 1) * sizeof(char));
	if (dest == NULL)
		return (NULL);
	while (s1[i] != '\0')
	{
		dest[i] = s1[i];
		i++;
	}
	while (s2[j] != '\0')
	{
		dest[i] = s2[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}
/*
int	main(int argc, char **argv)
{
if (argc < 3) {
        printf("Uso: %s <scr1> <scr2>\n", argv[0]);
        return 1;
    }
    char *scr1;

	scr1 = ft_strjoin(argv[1],argv[2]);
	if (scr1 != NULL)
    {
        printf("inicial: %s join: %s\n", argv[1], argv[2]);
        printf("obtenemos: %s\n", scr1);
        //free(scr1);
	// ¡No olvides liberar la memoria cuando hayas terminado!
    }
    else
    {
        printf("La asignación de memoria ha fallado.\n");
    }
    free(scr1);

    return 0;
}*/
