/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbeaurai < bbeaurai@student.42lehavre.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/20 11:47:29 by bbeaurai          #+#    #+#             */
/*   Updated: 2025/10/22 14:37:40 by bbeaurai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

void	*ft_calloc( size_t count, size_t size)
{
	unsigned char	*pointer;
	size_t	i;

	pointer = malloc(sizeof(int) * count);
	i = 0;
	while (i < (count * size))
	{
		pointer[i] = 0;
		i++;
	}
	return (pointer);
}

// #include <stdlib.h>
// #include <stdio.h>
// int main(void)
// {
// 	size_t elementCount = 10;
// 	size_t size = sizeof(int);

// 	int *pointer = (int *) calloc(elementCount, size);
// 	int *pointer2 = (int *) ft_calloc(elementCount, size);

// 	size_t i;

// 	i = 0;
// 	printf("\nAvant - Vrai Fonction\n");
// 	while (i < elementCount)
// 	{
// 		printf( "%d ", pointer[i]);
// 		i++;
// 	}
// 	i = 0;
// 	printf("\nAvant - Ma Fonction\n");
// 	while (i < elementCount)
// 	{
// 		printf( "%d ", pointer2[i]);
// 		i++;
// 	}
// 	i = 0;
// 	while (i < elementCount)
// 	{
// 		pointer[i] = i;
// 		pointer2[i] = i;
// 		i++;
// 	}
	
// 	printf("\nApres - Ma Fonction\n");
// 	i = 0;
// 	while (i < elementCount)
// 	{
// 		printf( "%d ", pointer[i]);
// 		i++;
// 	}
// 	printf("\nApres - Ma Fonction\n");
// 	i = 0;
// 	while (i < elementCount)
// 	{
// 		printf( "%d ", pointer2[i]);
// 		i++;
// 	}
// 	free(pointer);
// 	free(pointer2);
// }