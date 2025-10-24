/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbeaurai <bbeaurai@student.42lehavre.fr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/17 16:02:20 by bbeaurai          #+#    #+#             */
/*   Updated: 2025/10/24 17:45:39 by bbeaurai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;
	size_t	lenght;

	lenght = ft_strlen(little);
	if (!little)
		return ((char *)big);
	if (!big)
		return (NULL);
	i = 0;
	while (big[i] && i < len)
	{
		j = 0;
		while (big[i + j] == little[j] && i + j < len && j < lenght)
		{
			if (j == lenght - 1)
				return ((char *)big + i);
			j++;
		}
		i++;
	}
	return (NULL);
}

#include <bsd/string.h>
#include <stdio.h>
int main(void)
{
	size_t size = 210;
	//
	// ********************|Ma Fonction|*******************
	//
	char src[100] = "vfAoAhAe";
	char dest[100] = "vfAoAhAe";
	printf("\n\n\t\t\033[91;01m|Ma Fonction|\033[00m");
	char *str = ft_strnstr(src, dest, size);
	printf("\nResult : %s\n", str);
	//
	// ********************|La Fonction|********************
	//
	char src2[100] = "vfAoAhAe";
	char dest2[100] = "vfAoAhAe";
	printf("\n\t\t\033[92;01m|La Fonction|\033[00m");
	char *str2 = strnstr(src2, dest2, size);
	printf("\nResult : %s", str2);
	//
	// ********************|Ternaire|********************
	//
	int v = 5;
	int i = 0;
	while (str[i] || str2[i])
	{
		v = (str[i] - str2[i] == 0) ? 1 : 0;
		if (v == 0)
			while (str[i] || str2[i])
				i++;
		i++;
	}
	if (v == 0)
	{
		printf("\n\033[41;01m/!\\Erreur\033[00m");
		printf("\n\033[21;01m*Problem : Result\033[00m");
		return (0);
	}
	else
		printf("\n\033[42;01mOK\033[00m");
	return (1);
}