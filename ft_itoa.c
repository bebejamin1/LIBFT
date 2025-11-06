/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbeaurai <bbeaurai@student.42lehavre.fr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/29 14:17:56 by bbeaurai          #+#    #+#             */
/*   Updated: 2025/10/30 10:53:47 by bbeaurai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_count(int n)
{
	int	count;

	count = 0;
	if (n == 0)
		return (1);
	if (n < 0)
	{
		count++;
	}
	while (n)
	{
		n = n / 10;
		count++;
	}
	return (count);
}

char	*ft_itoa(int n)
{
	char		*str;
	long int	nbr;
	int			i;

	nbr = n;
	str = malloc(sizeof(char) * ft_count(n) + 1);
	i = ft_count(n) - 1;
	if (!str)
		return (NULL);
	if (nbr == 0)
		str[0] = '0';
	if (nbr < 0)
	{
		nbr *= -1;
		str[0] = '-';
	}
	while (nbr > 0)
	{
		str[i] = (nbr % 10) + '0';
		nbr /= 10;
		i--;
	}
	str[ft_count(n)] = '\0';
	return (str);
}

// void	ft_print_result(char const *s)
// {
// 	int		len;

// 	len = 0;
// 	while (s[len])
// 		len++;
// 	write(1, s, len);
// }

// int		main(int argc, const char *argv[])
// {
// 	int		arg;

// 	if (argc == 1)
// 		return (0);
// 	else if ((arg = atoi(argv[1])) == 1)
// 	{
// 		char *res = ft_itoa(0);
// 		ft_print_result(res);
// 		free(res);
// 	}
// 	else if (arg == 2)
// 	{
// 		char *res = ft_itoa(9);
// 		ft_print_result(res);
// 		free(res);
// 	}
// 	else if (arg == 3)
// 	{
// 		char *res = ft_itoa(-9);
// 		ft_print_result(res);
// 		free(res);
// 	}
// 	else if (arg == 4)
// 	{
// 		char *res = ft_itoa(10);
// 		ft_print_result(res);
// 		free(res);
// 	}
// 	else if (arg == 5)
// 	{
// 		char *res = ft_itoa(-10);
// 		ft_print_result(res);
// 		free(res);
// 	}
// 	else if (arg == 6)
// 	{
// 		char *res = ft_itoa(8124);
// 		ft_print_result(res);
// 		free(res);
// 	}
// 	else if (arg == 7)
// 	{
// 		char *res = ft_itoa(-9874);
// 		ft_print_result(res);
// 		free(res);
// 	}
// 	else if (arg == 8)
// 	{
// 		char *res = ft_itoa(543000);
// 		ft_print_result(res);
// 		free(res);
// 	}
// 	else if (arg == 9)
// 	{
// 		char *res = ft_itoa(-2147483648LL);
// 		ft_print_result(res);
// 		free(res);
// 	}
// 	else if (arg == 10)
// 	{
// 		char *res = ft_itoa(2147483647);
// 		ft_print_result(res);
// 		free(res);
// 	}
// 	return (0);
// }