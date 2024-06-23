/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: madamou <madamou@contact.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/23 02:12:47 by madamou           #+#    #+#             */
/*   Updated: 2024/05/18 18:20:38 by madamou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t			i;
	unsigned char	*n_src;
	unsigned char	*n_dest;

	if ((!dest || !src) && (!dest && !src))
		return (NULL);
	n_src = (unsigned char *)src;
	n_dest = (unsigned char *)dest;
	if (n_src < n_dest)
	{
		i = n + 1;
		while (--i > 0)
			n_dest[i - 1] = n_src[i - 1];
	}
	else
	{
		i = -1;
		while (++i < n)
			n_dest[i] = n_src[i];
	}
	return (dest);
}

// int	main(void)
// {
// 	char b[0xF0];
// 	printf("%p\n",ft_memmove(b, ((void*)0), 5));
// 	printf("%p\n", memmove(b, ((void*)0), 5));
// }