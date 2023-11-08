/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maria-nm <maria-nm@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/22 11:36:38 by maria-nm          #+#    #+#             */
/*   Updated: 2023/10/01 19:02:44 by maria-nm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"/*
#include <string.h>
#include <stddef.h>
#include <stdlib.h>
#include <stdio.h>
*/

/*Duplica la cadena que se le entra*/
char	*ft_strdup(const char *s1)
{
	size_t	cs1;
	char	*s2;
	size_t	i;

	i = 0;
	cs1 = ft_strlen(s1);
	s2 = (char *)malloc((cs1 + 1) * sizeof(char));
	if (s2 == NULL)
		return (NULL);
	while (i < cs1)
	{
		s2[i] = s1[i];
		i++;
	}
	s2[i] = '\0';
	return (s2);
}
/*
int	main(int argc, char **argv)
{
	char *dup1;
	char *dup2;
	
	dup1 = ft_strdup(argv[1]);
	dup2 = strdup(argv[1]);
	if (dup1 != NULL && dup2 != NULL)
    {
        printf("Original: %s\n", argv[1]);
        printf("Duplicate1: %s\n", dup1);
        printf("Duplicate2: %s\n", dup2);
        free(dup1);
	    free(dup2);
		// ¡No olvides liberar la memoria cuando hayas terminado!
    }
    else
    {
        printf("La asignación de memoria ha fallado.\n");
    }

    return 0;
}*/
