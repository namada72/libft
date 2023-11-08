/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maria-nm <maria-nm@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/26 09:07:01 by maria-nm          #+#    #+#             */
/*   Updated: 2023/09/27 13:01:21 by maria-nm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>*/

static int	ft_nbnb(int n)
{
	int	len;

	len = 0;
	if (n <= 0)
		len++;
	while (n != 0)
	{
		n = n / 10;
		len++;
	}
	return (len);
}

static int	ft_control_neg(char *res, int n)
{
	if (n < 0)
	{
		res[0] = '-';
		if (n == -2147483648)
		{
			res[1] = '2';
			n = -147483648;
		}
		n = -n;
	}
	return (n);
}

char	*ft_itoa(int n)
{
	char	*res;
	int		i;

	i = ft_nbnb(n);
	res = malloc(sizeof(char) * (i + 1));
	if (!res)
		return (NULL);
	res[i--] = '\0';
	if (n == 0)
	{
		res[0] = '0';
		return (res);
	}
	n = ft_control_neg(res, n);
	while (n > 0)
	{
		res[i--] = '0' + (n % 10);
		n = n / 10;
	}
	return (res);
}
/*
int	main(int argc, char **argv)
{
	int	c;
	char	*num1;
	char	*num2;

	c = atoi(argv[1]);
	num1 = ft_itoa(c);
	//num2 = itoa(c);
	printf( "el numero es %d\n",c);
	printf( "el numero en caracteres es %s\n",num1);
	//printf( "el numero en caracteres es %s\n",num2);
	free(num1);

	return (0);
}*/
