/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maria-nm <maria-nm@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/15 12:31:45 by maria-nm          #+#    #+#             */
/*   Updated: 2023/10/01 19:40:54 by maria-nm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
/*
#include <stdio.h>
#include <string.h>*/

/*Encuentra la ultima aparicion del caracter 'c' en la cadena 's'*/
char	*ft_strrchr(const char *s, int c)
{
	char	uc;
	int		i;
	int		find;

	uc = (char)c;
	i = 0;
	find = -1;
	while (s[i] != '\0')
	{
		if (s[i] == uc)
			find = i;
		i++;
	}
	if (uc == '\0')
		return ((char *)&s[i]);
	if (find == -1)
		return (NULL);
	return ((char *)&s[find]);
}
/*
int main(void)
{

	const char *s1 = "abcbbaaccb";
	const char *s2 = "abcbbaaccb";
	char c = 'd';
	
	char *result1 = ft_strrchr(s1, c);
	char *result2 = strrchr(s2,c);

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
