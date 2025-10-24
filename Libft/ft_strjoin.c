/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbeaurai < bbeaurai@student.42lehavre.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/21 09:59:52 by bbeaurai          #+#    #+#             */
/*   Updated: 2025/10/24 16:19:40 by bbeaurai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*error(char const *s1, char const *s2)
{
	char	*str;
	if (s1[0] == 0)
	{
		str = ft_strdup(s2);
		return (str);
	}
	if (s2[0] == 0)
	{
		str = ft_strdup(s1);
		return (str);
	}
	return(0);
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*str1;
	int		i;
	int		j;
	
	if (s1[0] == 0 || s2[0] == 0)
	{
		return (error(s1, s2));
	}
	str1 = malloc(sizeof *s1 + *s2 + 2);
	if (!str1)
		return (NULL);
	i = 0;
	while (s1[i])
	{
		str1[i] = s1[i];
		i++;
	}
	j = 0;
	while (s2[j])
	{
		str1[i] = s2[j];
		j++;
		i++;
	}
	str1[i] = '\0';
	return (str1);
}

// int main(void)
// {
// 	//
// 	// ********************|Ma Fonction|*******************
// 	//
// 	char	s1[] = "lorem ipsum";
// 	char	s2[] = "dolor sit amet";
// 	s2[0] = '\0';
// 	char *a = ft_strjoin(s1, s2);
// 	printf("\n\n\t\t\033[91;01m|Ma Fonction|\033[00m");
// 	printf("\n\nResult : %s\n", a);
// 	free (a);
// }

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
// 	char	s1[] = "lorem ipsum";
// 	char	s2[] = "dolor sit amet";
// 	char	*strjoin;
// 	int		arg;

// 	if (argc == 1)
// 		return (0);
// 	else if ((arg = atoi(argv[1])) == 1)
// 	{
// 		if (!(strjoin = ft_strjoin(s1, s2)))
// 			ft_print_result("NULL");
// 		else
// 			ft_print_result(strjoin);
// 		if (strjoin == s1 || strjoin == s2)
// 			ft_print_result("\nA new string was not returned");
// 	}
// 	else if (arg == 2)
// 	{
// 		s1[0] = '\0';
// 		if (!(strjoin = ft_strjoin(s1, s2)))
// 			ft_print_result("NULL");
// 		else
// 			ft_print_result(strjoin);
// 		if (strjoin == s1 || strjoin == s2)
// 			ft_print_result("\nA new string was not returned");
// 	}
// 	else if (arg == 3)
// 	{
// 		s2[0] = '\0';
// 		if (!(strjoin = ft_strjoin(s1, s2)))
// 			ft_print_result("NULL");
// 		else
// 			ft_print_result(strjoin);
// 		if (strjoin == s1 || strjoin == s2)
// 			ft_print_result("\nA new string was not returned");

// 		// printf("nul ? = [%d]\n", ft_strjoin(s1, s2)[11]);
// 	}
// 	else if (arg == 4)
// 	{
// 		s1[0] = '\0';
// 		s2[0] = '\0';
// 		if (!(strjoin = ft_strjoin(s1, s2)))
// 			ft_print_result("NULL");
// 		else
// 			ft_print_result(strjoin);
// 		if (strjoin == s1 || strjoin == s2)
// 			ft_print_result("\nA new string was not returned");
// 	}
// 	return (0);
// }