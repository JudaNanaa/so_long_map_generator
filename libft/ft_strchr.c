/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: madamou <madamou@contact.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/23 02:57:30 by madamou           #+#    #+#             */
/*   Updated: 2024/03/30 19:40:42 by madamou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int		i;
	char	*ptr;

	ptr = (char *)s;
	i = 0;
	while (ptr[i])
	{
		if (ptr[i] == (char)c)
			return (&ptr[i]);
		i++;
	}
	if (ptr[i] == (char)c)
		return (&ptr[i]);
	return (NULL);
}

/*      int main(void)
{
	char chain[] = "oui je test";
	char c = 'i';
	printf("%s\n", ft_strchr(chain, c));
	printf("%s\n", strchr(chain, c));
}*/