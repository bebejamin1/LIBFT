/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbeaurai < bbeaurai@student.42lehavre.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/21 10:20:35 by bbeaurai          #+#    #+#             */
/*   Updated: 2025/10/24 15:13:09 by bbeaurai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_checkleft(char *str, char *check)
{
	int	i;
	int	j;
	int	count;
	int	loop;

	i = 0;
	j = 0;
	count = 0;
	loop = ft_strlen((const char *)str);
	while (loop > 0)
	{
		j = 0;
		while (check[j])
		{
			if (str[i] == check[j])
			{
				i++;
				count++;
			}
			j++;
		}
		loop--;
	}
	return (count);
}

static int	ft_checkright(char *str, char *check)
{
	int		i;
	int		j;
	int		count;
	int		loop;

	i = ft_strlen((const char *)str) - 1;
	j = ft_strlen((const char *)check);
	count = i;
	loop = i;
	while (loop >= 0)
	{
		j = ft_strlen((const char *)check);
		while (j >= 0)
		{
			if (str[i] == check[j])
			{
				i--;
				count--;
			}
			j--;
		}
		loop--;
	}
	return (count);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*str;
	int		a;
	int		z;
	int		i;

	i = 0;
	a = ft_checkleft((char *)s1, (char *)set);
	z = ft_checkright((char *)s1, (char *)set);
	str = malloc(sizeof (char *) * (z - a) + 2);
	if (!str)
		return (NULL);
	if (a >= 0 && z >= 0)
	{
		while (a <= z)
		{
			str[i] = (char)s1[a];
			a++;
			i++;
		}
		str[i] = 0;
		return (str);
	}
	return (str);
}
// int main(void)
// {
// 	//
// 	// ********************|Ma Fonction|*******************
// 	//
// 	char str1[100] = "lorem \n ipsum \t dolor \n sit \t amet";
// 	char str2[100] = " ";
// 	char *a = ft_strtrim(str1, str2);
// 	printf("\n\n\t\t\033[91;01m|Ma Fonction|\033[00m");
// 	printf("\n\nResult : %s\n", a);
// 	free (a);
// }