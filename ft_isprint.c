/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbeaurai < bbeaurai@student.42lehavre.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/13 15:21:04 by bbeaurai          #+#    #+#             */
/*   Updated: 2025/10/13 15:58:11 by bbeaurai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isprint(int c)
{
	if (c >= 32 && c < 127)
		return (16384);
	return (0);
}

// #include <stdio.h>
// #include <ctype.h>
// int main(void)
// {
// 	printf("Vrai fonction :   %d\n", isprint('f'));
// 	printf("Fausse fonction : %d\n", ft_isprint('f'));
// 	printf("Vrai fonction :   %d\n", isprint('\n'));
// 	printf("Fausse fonction : %d\n", ft_isprint('\n'));
// }