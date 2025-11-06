/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbeaurai < bbeaurai@student.42lehavre.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 12:47:23 by bbeaurai          #+#    #+#             */
/*   Updated: 2025/10/20 15:50:10 by bbeaurai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *pointer, size_t n)
{
	size_t			i;
	unsigned char	*p;

	p = pointer;
	i = 0;
	while (i < n)
	{
		p[i] = 0;
		i++;
	}
}

// #include <string.h>
// #include <stdio.h>
// int main(void)
// {
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
// 	ft_bzero(tab, 5);
// 	printf("\nft_bzero :");
// 	while (i < 5)
// 	{
// 		printf("%d ", tab[i]);
// 		i++;
// 	}
// 	bzero(tab2, 5);
// 	printf("\nbzero :   ");
// 	i = 0;
// 	while (i < 5)
// 	{
// 		printf("%d ", tab2[i]);
// 		i++;
// 	}
// }