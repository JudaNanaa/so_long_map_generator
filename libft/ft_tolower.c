/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: madamou <madamou@contact.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/22 00:36:57 by yourLogin         #+#    #+#             */
/*   Updated: 2024/03/26 14:35:50 by madamou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_tolower(int c)
{
	unsigned char	true_c;

	if (c == -1 || c <= -129 || c >= 256)
		return (c);
	true_c = (unsigned char)c;
	if (true_c >= 'A' && true_c <= 'Z')
		return (true_c + 32);
	return (true_c);
}

/*int	main(void)
{
	printf("%d\n", ft_tolower(-130));
	printf("%d\n", tolower(-130));
}*/
