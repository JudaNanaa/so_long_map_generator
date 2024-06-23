/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: madamou <madamou@contact.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/23 11:22:14 by madamou           #+#    #+#             */
/*   Updated: 2024/05/18 15:17:18 by madamou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;
	char	*true_big;
	char	*true_little;

	if (!*little)
		return ((char *)big);
	true_big = (char *)big;
	true_little = (char *)little;
	i = 0;
	while (i < len && true_big[i])
	{
		j = 0;
		while (true_big[i + j] == true_little[j] && true_little[j] && i
			+ j < len)
			j++;
		if (true_little[j] == '\0')
			return (&true_big[i]);
		i++;
	}
	return (NULL);
}

// int	main(void)
// {
// 	// char haystack[30] = "aaabcabcd";
// 	// char needle[10] = "aabc";
// 	char * empty = (char*)"";
// 	if (ft_strnstr(empty, "coucou", -1) == 0)
// 		printf("yes\n");
// 	else
// 		printf("no\n");
// 	if (strnstr(empty, "coucou", -1) == 0)
// 		printf("yes\n");
// 	else
// 		printf("no\n");
// }
