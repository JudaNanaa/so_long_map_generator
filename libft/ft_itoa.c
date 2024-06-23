/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: madamou <madamou@contact.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/19 15:05:39 by marvin            #+#    #+#             */
/*   Updated: 2024/03/23 15:07:10 by madamou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_size_malloc(long nb)
{
	int	size;

	size = 1;
	if (nb < 0)
	{
		nb = -nb;
		size++;
	}
	while (nb / 10 > 0)
	{
		nb = nb / 10;
		size++;
	}
	return (size);
}

static void	ft_norminette(char *result, long nb, int size)
{
	if (nb < 0)
	{
		nb = -nb;
		result[0] = '-';
	}
	if (nb >= 10)
	{
		ft_norminette(result, nb / 10, size - 1);
		ft_norminette(result, nb % 10, size);
	}
	if (nb < 10)
	{
		result[size - 1] = (nb + '0');
	}
}

char	*ft_itoa(int n)
{
	long	nb;
	int		size;
	char	*result;

	nb = n;
	size = ft_size_malloc(nb);
	result = malloc(sizeof(char) * (size + 1));
	if (result == NULL)
		return (NULL);
	ft_norminette(result, nb, size);
	result[size] = '\0';
	return (result);
}

/*int main(void)
{
	printf("%s\n", ft_itoa(2147483647));
}*/
