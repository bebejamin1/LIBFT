/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbeaurai <bbeaurai@student.42lehavre.fr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/16 07:07:33 by bbeaurai          #+#    #+#             */
/*   Updated: 2025/10/24 18:01:27 by bbeaurai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char		*maldives;
	char		*wiki;
	size_t				i;

	maldives = (char *)dest;
	wiki = (char *)src;
	i = 0;
	if (n == 0 || !dest || !src)
		return (NULL);
	if (maldives[0] == 0 && wiki[0] == 0)
		return (0);
	if (ft_strlen((const char *)wiki) > ft_strlen((const char *)maldives))
	{
		while (n > i && (maldives[n] != 0 || wiki[n] != 0))
		{
			maldives[n - 1] = wiki[n - 1];
			n--;
		}
	}
	while (n >= i && (i < ft_strlen((const char *)maldives) || i < ft_strlen((const char *)wiki)) )
	{
		maldives[i - 1] = wiki[i - 1];
		i++;
	}
	return (maldives);
}

// int		main(int argc, const char *argv[])
// {
// 	char	src[] = "lorem ipsum dolor sit amet";
// 	char	src2[] = "lorem ipsum dolor sit amet";
// 	char	*dest;
// 	char	*dest2;
// 	int		arg;

// 	dest = src + 1;
// 	dest2 = src2 + 1;
// 	if (argc == 1)
// 		return (0);
// 	else if ((arg = atoi(argv[1])) == 1)
// 	{
// 		ft_memmove(dest, "consectetur", 5);
// 		memmove(dest2, "consectetur", 5);
// 		printf("\nma fonction : %s\n", dest);
// 		printf("\nla fonction : %s\n", dest2);
// 	}
// 	else if (arg == 2)
// 	{
// 		ft_memmove(dest, "con\0sec\0\0te\0tur", 10);
// 		memmove(dest2, "con\0sec\0\0te\0tur", 10);
// 		printf("\nma fonction : %s\n", dest);
// 		printf("\nla fonction : %s\n", dest2);
// 	}
// 	else if (arg == 3)
// 	{
// 		if (dest != ft_memmove(dest, src, 8))
// 			write(1, "dest's adress was not returned\n", 31);
// 		write(1, dest, 22);
// 	}
// 	else if (arg == 4)
// 	{
// 		if (src != ft_memmove(src, dest, 8))
// 			write(1, "dest's adress was not returned\n", 31);
// 		write(1, dest, 22);
// 	}
// 	else if (arg == 5)
// 	{
// 		if (src != ft_memmove(src, dest, 0))
// 			write(1, "dest's adress was not returned\n", 31);
// 		write(1, dest, 22);
// 	}
// 	return (0);
// }