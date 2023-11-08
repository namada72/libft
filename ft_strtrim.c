/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maria-nm <maria-nm@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/23 18:37:43 by maria-nm          #+#    #+#             */
/*   Updated: 2023/10/17 19:07:00 by maria-nm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"/*
#include <string.h>
#include <stddef.h>
#include <stdlib.h>
#include <stdio.h>*/

/*elimina los caracteres de referencia set al inicio y al final de s1*/
char	*ft_strtrim(char const *s1, char const *set)
{
	char	*trim;
	size_t	start;
	size_t	end;
	size_t	i;

	if (!s1 || !set)
		return (NULL);
	start = 0;
	while (s1[start] && ft_strchr(set, s1[start]))
		start++;
	end = ft_strlen(s1);
	while (end > start && ft_strchr(set, s1[end - 1]))
		end--;
	trim = (char *)malloc((end - start + 1) * sizeof(char));
	if (!trim)
		return (NULL);
	i = 0;
	while (start < end)
	{
		trim[i] = s1[start];
		i++;
		start++;
	}
	trim[i] = '\0';
	return (trim);
}
/*
int     main(int argc, char **argv)
{
	if (argc < 3) {
		        printf("Uso: %s <scr1> <scr2>\n", argv[0]);
			        return 1;
				    }
	    char *scr1;
	    scr1 = ft_strtrim(argv[1],argv[2]);
	    if (scr1 != NULL)
	    {
		    printf("inicial: %s join: %s\n", argv[1], argv[2]);
		    printf("obtenemos: %s\n", scr1);
	    }
	    else
	    {
		    printf("La asignación de memoria ha fallado.\n");
	    }
	    free(scr1);
	    return 0;
}
*/
