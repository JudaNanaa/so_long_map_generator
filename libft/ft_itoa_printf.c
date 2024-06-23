/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa_printf.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: madamou <madamou@contact.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/06 01:33:03 by madamou           #+#    #+#             */
/*   Updated: 2024/06/06 12:38:26 by madamou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_size_malloc(long nb, int len_base)
{
	int	size;

	size = 1;
	if (nb < 0)
	{
		nb = -nb;
		size++;
	}
	while (nb / len_base > 0)
	{
		nb = nb / len_base;
		size++;
	}
	return (size);
}

static void	ft_norminette(char *result, long nb, int size, char *base)
{
	if (nb < 0)
	{
		nb = -nb;
		result[0] = '-';
	}
	if (nb >= ft_strlen1(base))
	{
		ft_norminette(result, nb / ft_strlen1(base), size - 1, base);
		ft_norminette(result, nb % ft_strlen1(base), size, base);
	}
	if (nb < ft_strlen1(base))
	{
		result[size - 1] = base[nb];
	}
}

char	*ft_itoa_printf(int nb)
{
	int		size;
	char	*result;
	int		len_base;
	char	*base;

	base = "0123456789";
	len_base = ft_strlen1(base);
	size = ft_size_malloc(nb, len_base);
	result = malloc(sizeof(char) * (size + 1));
	if (result == NULL)
		return (NULL);
	ft_norminette(result, nb, size, base);
	result[size] = '\0';
	return (result);
}

char	*ft_itoa_unsigned(unsigned int nb)
{
	int		size;
	char	*result;
	int		len_base;
	char	*base;

	base = "0123456789";
	len_base = ft_strlen1(base);
	size = ft_size_malloc(nb, len_base);
	result = malloc(sizeof(char) * (size + 1));
	if (result == NULL)
		return (NULL);
	ft_norminette(result, nb, size, base);
	result[size] = '\0';
	return (result);
}

char	*ft_itoa_base(unsigned int nb, char *base)
{
	int		size;
	char	*result;
	int		len_base;

	len_base = ft_strlen1(base);
	size = ft_size_malloc_long(nb, len_base);
	result = malloc(sizeof(char) * (size + 1));
	if (result == NULL)
		return (NULL);
	ft_norminette(result, nb, size, base);
	result[size] = '\0';
	return (result);
}
