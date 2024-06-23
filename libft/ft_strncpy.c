/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: madamou <madamou@contact.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/22 20:30:08 by madamou           #+#    #+#             */
/*   Updated: 2024/03/22 20:30:08 by madamou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncpy(char *dest, const char *src, size_t n)
{
	unsigned long int	i;

	i = 0;
	while (src[i] && i < n)
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
		dest[i++] = '\0';
	return (dest);
}

/*int main(void)
{
	char dest[] = "787878";
	char src[] = "oui";
	printf("%s\n", ft_strncpy(dest, src, 4));
	char dest1[] = "787878";
	char src1[] = "oui";
	printf("%s\n", strncpy(dest1, src1, 4));
}*/