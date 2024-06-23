/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: madamou <madamou@contact.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/23 03:28:22 by madamou           #+#    #+#             */
/*   Updated: 2024/05/18 11:59:28 by madamou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t			i;
	unsigned char	*true_s1;
	unsigned char	*true_s2;

	true_s1 = (unsigned char *)s1;
	true_s2 = (unsigned char *)s2;
	i = 0;
	while (i < n && (true_s1[i] || true_s2[i]))
	{
		if (true_s1[i] != true_s2[i])
		{
			if (true_s1[i] < true_s2[i])
				return (-1);
			return (1);
		}
		i++;
	}
	return (0);
}

// int	main(void)
// {
//  	char *s1 = "atoms\0\0\0\0";
//  	char *s2 = "atoms\0abc";
//  	size_t size = 8;
//  	int i1 = ((strncmp(s1, s2, size) > 0) ? 1 : ((strncmp(s1, s2,
// size) < 0) ? -1 : 0));
//  	int i2 = ((ft_strncmp(s1, s2, size) > 0) ? 1 : ((ft_strncmp(s1, s2,
// size) < 0) ? -1 : 0));

//  	if (i1 == i2)
//  		printf("yes\n");
// 	else
//  		printf("no\n");
// }