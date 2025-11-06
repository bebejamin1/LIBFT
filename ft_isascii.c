/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbeaurai < bbeaurai@student.42lehavre.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/13 15:13:08 by bbeaurai          #+#    #+#             */
/*   Updated: 2025/10/13 16:09:47 by bbeaurai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
		return (1);
	return (0);
}

// #include <stdio.h>
// #include <ctype.h>
// int main(void)
// {
// 	printf("Vrai fonction :   %d\n", isascii('f'));
// 	printf("Fausse fonction : %d\n", ft_isascii('f'));
// 	printf("Vrai fonction :   %d\n", isascii(434));
// 	printf("Fausse fonction : %d\n", ft_isascii(434));
// }