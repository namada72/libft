/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maria-nm <maria-nm@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/27 13:15:19 by maria-nm          #+#    #+#             */
/*   Updated: 2023/10/03 17:59:33 by maria-nm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*
#include <stdio.h>*/

/*aplica una funciona a cada caracter de una cadena, pasando su indice como
 * argumento*/
void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	unsigned int	i;

	if (!s || !f)
		return ;
	i = 0;
	while (s[i])
	{
		f(i, &s[i]);
		i++;
	}
}
/*
void print_char_index(unsigned int index, char *character)
{
    printf("Index %u: %c\n", index, *character);
}

int main(int argc, char **argv)
{
    char str;

    printf("Original string: %s\n", argv[1]);
    ft_striteri(argv[1], &print_char_index);

    return 0;
}*/
