/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maria-nm <maria-nm@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 17:42:08 by maria-nm          #+#    #+#             */
/*   Updated: 2023/10/01 18:59:55 by maria-nm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
/*
#include <stdio.h>
#include <string.h>*/

/*encuentra la pimera aparicion de un caracter 'c' en un cadena 's'*/
char	*ft_strchr(const char *s, int c)
{
	char	uc;
	int		i;

	uc = (char)c;
	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] == uc)
			return ((char *)&s[i]);
		i++;
	}
	if (uc == '\0')
		return ((char *)&s[i]);
	return (NULL);
}
/*
int main(void)
{

	const char *s1 = "abcbbaaccb";
	const char *s2 = "abcbbaaccb";
	char c = 'b';
	
	char *result1 = ft_strchr(s1, c);
	char *result2 = strchr(s2,c);

    if (result1 != NULL) 
	{

	printf("El carácter '%c' se encuentra en la posición %ld de la cadena: 
	\"%s\"\n", c, result1 - s1, s1);
	printf("El carácter '%c' se encuentra en la posición %ld de la cadena: 
	\"%s\"\n", c, result2 - s2, s2);
    } 
	else 
	{

    printf("El carácter '%c' no se encuentra en la cadena: \"%s\"\n", c, s1);
    printf("El carácter '%c' no se encuentra en la cadena: \"%s\"\n", c, s2);
    }

    return 0;
}*/
