/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: madamou <madamou@contact.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/23 11:42:25 by madamou           #+#    #+#             */
/*   Updated: 2024/05/18 17:43:21 by madamou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	unsigned char	*ptr;
	size_t			i;
	long long		check_nmemb;
	long long		check_size;

	i = 0;
	check_nmemb = (long long)nmemb;
	check_size = (long long)size;
	if ((nmemb > 4294967295 || size > 4294967295) && check_nmemb < 0
		&& check_size < 0)
		return (NULL);
	if (check_nmemb * check_size < 0)
		return (NULL);
	else
		ptr = malloc(nmemb * size);
	if (!ptr)
		return (NULL);
	while (i < nmemb * size)
		ptr[i++] = '\0';
	return ((void *)ptr);
}

// int main(void)
// {
// 	if (ft_calloc(3, -5) == NULL)
// 		printf("yes\n");
// 	else
// 		printf("no\n");
// 	if (calloc(3, -5) == NULL)
// 		printf("yes\n");
// 	else
// 		printf("no\n");
// }