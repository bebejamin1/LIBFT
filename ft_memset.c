/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbeaurai < bbeaurai@student.42lehavre.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/13 15:39:11 by bbeaurai          #+#    #+#             */
/*   Updated: 2025/10/15 14:47:27 by bbeaurai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *pointer, int value, size_t size)
{
	unsigned char	blabla;
	size_t			i;
	unsigned char	*p;

	p = pointer;
	blabla = value;
	i = 0;
	while (i < size)
	{
		p[i] = blabla;
		i++;
	}
	return (pointer);
}

// #include <string.h>
// #include <stdio.h>
// int main(void)
// {
// 	size_t size = sizeof(int)*(5);
// 	int tab[] = { 10, 20, 30, 40, 50};
// 	int tab2[] = { 10, 20, 30, 40, 50};
// 	int i;

// 	i = 0;
// 	printf("avant :    ");
// 	while (i < 5)
// 	{
// 		printf("%d ", tab[i]);
// 		i++;
// 	}
// 	i = 0;
// 	ft_memset(tab, 0, size);
// 	printf("\nft_memset :");
// 	while (i < 5)
// 	{
// 		printf("%d ", tab[i]);
// 		i++;
// 	}
// 	memset(tab2, 0, size);
// 	printf("\nmemset :   ");
// 	i = 0;
// 	while (i < 5)
// 	{
// 		printf("%d ", tab2[i]);
// 		i++;
// 	}
// }