/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbeaurai < bbeaurai@student.42lehavre.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/22 07:47:51 by bbeaurai          #+#    #+#             */
/*   Updated: 2025/10/22 14:38:37 by bbeaurai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
Paramètres : s : La chaîne à diviser.

c : Le caractère délimiteur.

Valeur de retour : Le tableau des nouvelles chaînes résultant de la division.
NULL si l’allocation échoue.

Fonction externe : malloc, free

Description : Alloue de la mémoire (à l’aide de malloc(3))
et renvoie un tableau de chaînes obtenu en divisant « s » avec le caractère « c » 
comme délimiteur. Le tableau doit se terminer par un pointeur NULL.
*/

int	ft_countword(char *s, char c)
{
	int	nb;
	int	i;

	nb = 1;
	i = 0;
	while (s[i] == c)
		i++;
	printf("\ns ; %c i %d\n", s[i], i);
	while (s[i])
	{
		printf("\ns ; %c i %d\n", s[i], i);
		if (s[i] == c && s[i + 1] != c)
		{
			printf("\nnb ; %d\n", nb);
			nb++;
		}
		i++;
	}
	return (nb);
}

// char **ft_split(char const *s, char c)
// {
// 	int i;
	
// 	char **string1;

// 	i = ft_nbword((char)*s, c);
	
// 	string1 = NULL;
// 	return (string1);
// }

// int main(void)
// {
// 	char *str = "   dans  la vie   ";
// 	printf("%d", ft_countword(str, ' '));
// }