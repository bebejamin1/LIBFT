/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbeaurai < bbeaurai@student.42lehavre.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/17 15:27:40 by bbeaurai          #+#    #+#             */
/*   Updated: 2025/10/22 10:25:21 by bbeaurai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t		i;
	const char	*str;

	i = 0;
	str = s;
	while (str[i] && i < n)
	{
		if (c == str[i])
			return ((char *)&str[i]);
		i++;
	}
	return (0);
}

// #include <stdio.h>
// #include <string.h>
// int main(void)
// {
// 	int size = 65;
// 	size_t n = 2;
// 	//
// 	// ********************|Ma Fonction|*******************
// 	//
// 	char dest[100] = "vfAoAhAe";
// 	printf("\n\n\t\t\033[91;01m|Ma Fonction|\033[00m");
// 	char *str = ft_memchr(dest, size, n);
// 	printf("\nResult : %s\n", str);
// 	//
// 	// **************++******|La Fonction|********************
// 	//
// 	char dest2[100] = "vfAoAhAe";
// 	printf("\n\t\t\033[92;01m|La Fonction|\033[00m");
// 	char *str2 = memchr(dest2, size, n);
// 	printf("\nResult : %s", str2);
// 	//
// 	// ********************|Ternaire|********************
// 	//
// 	int v = 5;
// 	int i = 0;
// 	while (str[i] || str2[i])
// 	{
// 		v = (str[i] - str2[i] == 0) ? 1 : 0;
// 		if (v == 0)
// 			while (str[i] || str2[i])
// 				i++;
// 		i++;
// 	}
// 	if (v == 0)
// 	{
// 		printf("\n\033[41;01m/!\\Erreur\033[00m");
// 		printf("\n\033[21;01m*Problem : Result\033[00m");
// 		return (0);
// 	}
// 	else
// 		printf("\n\033[42;01mOK\033[00m");
// 	return (1);
// }