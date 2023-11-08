/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maria-nm <maria-nm@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 12:33:19 by maria-nm          #+#    #+#             */
/*   Updated: 2023/10/01 19:36:03 by maria-nm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

/*encuentra un string 'needle' dentro de otro string 'haystack'
 * y retorna un puntero a donde lo ha encontrado dentro de el maximo nuemro
 * de caracteres 'len' dados y  utiliza la funcion 
 * ft_strncmp para comparar las 2 zonas de memoria*/
char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	len_needle;

	len_needle = ft_strlen(needle);
	if (len_needle == 0)
		return ((char *)haystack);
	while (*haystack != '\0' && len_needle <= len)
	{
		if (*haystack == *needle
			&& ft_strncmp(haystack, needle, len_needle) == 0)
			return ((char *)haystack);
		haystack++;
		len--;
	}
	return (NULL);
}
/*
int main(void)
{
char book[] = "abcbbaaccab";
char look[] = "bb";
size_t	i= 10;
printf ("%s\n", book);
//ret = ft_strstr(book,look);
printf("busco durante %zu caracteres  %s en %s y lo encuentro en posicion %s\n",
i,look,book,ft_strnstr(book,look,i));

printf("busco durante %zu caracteres  %s en %s y lo encuentro en posicion %s\n",
i,look,book,strnstr(book,look,i));
return 0;
}*/
