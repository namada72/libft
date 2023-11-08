/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maria-nm <maria-nm@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/23 18:37:43 by maria-nm          #+#    #+#             */
/*   Updated: 2023/10/01 18:57:23 by maria-nm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
/*
#include <stddef.h>
#include <string.h>
#include <stdlib.h>
#include <stdio.h>*/

/*cuenta el numero de subcadenas para reservar la memoria*/
static int	ft_countword(char const *s, char c)
{
	int	count;

	count = 0;
	if (!*s)
		return (0);
	while (*s)
	{
		while (*s == c)
			s++;
		if (*s)
			count++;
		while (*s != c && *s)
			s++;
	}
	return (count);
}

/*libera la memoria*/
static void	ft_free_str(char **str, size_t count)
{
	size_t	i;

	if (!str)
		return ;
	i = 0;
	while (i < count)
	{
		free(str[i]);
		i++;
	}
	free(str);
}

/*consigue las subcadenas*/
static char	**ft_get_str(char **str, char const *s, char c)
{
	size_t	i;
	size_t	word_len;

	i = 0;
	while (*s)
	{
		while (*s == c)
			s++;
		if (*s != '\0')
		{
			word_len = 0;
			while (s[word_len] != c && s[word_len] != '\0')
				word_len++;
			str[i] = ft_substr(s, 0, word_len);
			if (!(str[i]))
			{
				ft_free_str(str, i);
				return (NULL);
			}
			s += word_len;
			i++;
		}
	}
	str[i] = NULL;
	return (str);
}

/*divide una cadena en varias subcadenas usando 'c' como separacion*/
char	**ft_split(char const *s, char c)
{
	char	**str;

	if (!s)
		return (NULL);
	str = (char **)malloc((ft_countword(s, c) + 1) * sizeof(char *));
	if (!str)
		return (NULL);
	str = ft_get_str(str, s, c);
	return (str);
}
/*    
int     main(int argc, char **argv)
{
	char *c;
	int	i;

	i = 0;
	if (argc < 3) {
		        printf("Uso: %s <scr1> <c>\n", argv[0]);
			        return 1;
				    }
	    char **scr1;
	    c = argv[2];
	    scr1 = ft_split(argv[1],*c);
	    if (scr1 != NULL)
	    {
		    printf("inicial: %s join: %c\n", argv[1], *c);
		    while( scr1[i] != NULL)
		    {
		    printf("obtenemos: %s\n", scr1[i]);
		    free(scr1[i]);
		    i++;
		    }
		    //free(scr1);
	    }
	    else
	    {
		    printf("La asignación de memoria ha fallado.\n");
	    }
	    free(scr1);
	    return 0;
}
*/
