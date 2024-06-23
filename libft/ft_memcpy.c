/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: madamou <madamou@contact.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/23 01:49:32 by madamou           #+#    #+#             */
/*   Updated: 2024/05/18 23:18:31 by madamou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t			i;
	unsigned char	*n_src;
	unsigned char	*n_dest;

	if (!dest && !src && n != 0)
	{
		return (dest);
	}
	n_src = (unsigned char *)src;
	n_dest = (unsigned char *)dest;
	i = -1;
	while (++i < n)
		n_dest[i] = n_src[i];
	return (dest);
}

/*int	main(void)
{
	ft_memcpy(NULL, NULL, 0);
	//memcpy(((void*)0), ((void*)0), 3);
}*/
