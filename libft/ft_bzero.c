/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: madamou <madamou@contact.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/23 01:40:02 by madamou           #+#    #+#             */
/*   Updated: 2024/03/23 01:47:49 by madamou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	char	*ptr;
	size_t	i;

	i = 0;
	ptr = (char *)s;
	while (i < n)
		ptr[i++] = '\0';
}

/*int	main(void)
{
	char imad[] = "oui je test";
	printf("%s\n", (imad));
	bzero(imad, 10);
	printf("%s\n", (imad));
	char imad1[] = "oui je test";
	printf("%s\n", (imad1));
	ft_bzero(imad1, 10);
	printf("%s\n", (imad1));
}*/