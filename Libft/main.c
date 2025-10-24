/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbeaurai <bbeaurai@student.42lehavre.fr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/20 16:12:49 by bbeaurai          #+#    #+#             */
/*   Updated: 2025/10/24 17:45:15 by bbeaurai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int main(void)
{
	// char	*fonction = '\0';
	int		option = 100;

	printf("Saisissez la fonction à tester :\n\n");
	printf("1.ft_isalpha.c 2.ft_isdigit.c 3.ft_isalnum.c\n\n");
	printf("4.ft_isascii.c 5.ft_isprint.c 6.ft_strlen.c\n\n");
	printf("7.ft_memset.c 8.ft_bzero.c 9.ft_memcpy.c\n\n");
	printf("10.ft_memmove.c 11.ft_strlcpy.c 12.ft_strlcat.c\n\n");
	printf("13.ft_toupper.c 14.ft_tolower.c 15.ft_strchr.c\n\n");
	printf("16.ft_strrchr.c 17.ft_strncmp.c 18.ft_memchr.c\n\n");
	printf("19.ft_memcmp.c 20.ft_strnstr.c 21.ft_atoi.c\n\n");
	printf("22.ft_calloc\n\n");
	printf("0. exit\n\n");
	while (1 != 0)
	{
		printf("Entrer le nombre de la Fonction : ");
		scanf("%d", &option);
		// if (option == 1)
		// {
		// 	// fonction = "ft_isalpha.c";
		// }
	}
}
	size_t size = 210;
	//
	// ********************|Ma Fonction|*******************
	//
	char src[100] = "vfAoAhAe";
	char dest[100] = "vfAoAhAe";
	printf("\n\n\t\t\033[91;01m|Ma Fonction|\033[00m");
	char *str = fonction(src, dest, size);
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
	}
}
