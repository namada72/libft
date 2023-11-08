/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maria-nm <maria-nm@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 18:24:36 by maria-nm          #+#    #+#             */
/*   Updated: 2023/09/29 13:24:45 by maria-nm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*
#include <stdlib.h>
#include <stdint.h>
#include <string.h>
#include <stddef.h>
#include <stdio.h>*/
/*Reserva memoria y la inicializa a zero*/

void	*ft_calloc(size_t count, size_t size)
{
	size_t	total_size;
	void	*mem;

	total_size = count * size;
	mem = malloc(total_size);
	if (mem == NULL)
		return (NULL);
	ft_memset(mem, 0, total_size);
	return (mem);
}
/*
int main()
{
    // Ejemplo de uso de my_calloc
    size_t num_elements = 5;
    size_t element_size = sizeof(int);

    int* arr1 = (int*)ft_calloc(num_elements, element_size);
    int* arr2 = (int*)ft_calloc(num_elements, element_size);
    if (arr1 != NULL && arr2 != NULL) 
	{
        for (size_t i = 0; i < num_elements; i++) 
		{
            printf("%d comparado con %d ", arr1[i], arr2[i]); 
			// Deberían ser todos ceros
        }
        printf("\n");
    }
    // No olvides liberar la memoria cuando ya no la necesites
    if (arr1 != NULL && arr2 != NULL) 
	{
        free(arr1);
		free(arr2);
    }
    return 0;
}*/
