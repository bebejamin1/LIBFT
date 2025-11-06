/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbeaurai < bbeaurai@student.42lehavre.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/15 13:45:41 by bbeaurai          #+#    #+#             */
/*   Updated: 2025/10/20 15:52:42 by bbeaurai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char		*final;
	const unsigned char	*eau;
	size_t				i;

	i = 0;
	final = dest;
	eau = src;
	if (!final && !eau)
		return (0);
	while (i < n)
	{
		final[i] = eau[i];
		i++;
	}
	return (final);
}

// #include <string.h>
// #include <stdio.h>
// int main(void)
// {
// 	char src[100] = "blablabla";
// 	char dest[100] = "";
// 	ft_memcpy(dest, src, 5);
// 	printf("%s", dest);
// }