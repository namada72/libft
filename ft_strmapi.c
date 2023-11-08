/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maria-nm <maria-nm@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/27 13:15:19 by maria-nm          #+#    #+#             */
/*   Updated: 2023/10/01 19:26:31 by maria-nm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*
#include <stdio.h>*/

/*aplica una funcion a cada caracter de una cadena y reserva memoria
 para la cadena devuelta*/
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*x;
	unsigned int	i;

	if (!s || !f)
		return (NULL);
	i = 0;
	x = (char *)malloc(sizeof(char) * (ft_strlen(s)) + 1);
	if (!x)
		return (NULL);
	while (i != ft_strlen(s))
	{
		x[i] = f(i, s[i]);
		i++;
	}
	x[i] = '\0';
	return (x);
}
/*
char my_func(unsigned int i, char str)
{
printf("My inner function: index = %d and %c\n", i, str);
return str - 32;
}

int main(int argc, char **argv)
{
printf("The result is %s\n", argv[1]);
char *result = ft_strmapi(argv[1], my_func);
printf("The result is %s\n", result);
return 0;
}*/
