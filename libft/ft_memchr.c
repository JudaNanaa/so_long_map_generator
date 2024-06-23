/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: madamou <madamou@contact.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/23 11:05:44 by madamou           #+#    #+#             */
/*   Updated: 2024/05/18 14:54:44 by madamou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	char	*ptr;
	size_t	i;
	char	true_c;

	i = 0;
	true_c = (char)c;
	ptr = (char *)s;
	while (i < n)
	{
		if (ptr[i] == true_c)
			return (&ptr[i]);
		i++;
	}
	return (NULL);
}

// int main(void)
// {
// 	char tab[] = {0, 1, 2 ,3 ,4 ,5};
// 	// int tab1[7] = {0, 1, 2 ,3 ,4 ,5};
// 	char *oui = tab + 2;
// 	if (ft_memchr(tab, 2 + 256, 3) == tab + 2)
// 		printf("yes\n");
// 	else
// 		printf("no\n");
// 	if (memchr(tab, 2 + 256, 3) == tab + 2)
// 		printf("yes\n");
// 	else
// 		printf("no\n");
// }
