/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: madamou <madamou@contact.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/04 19:12:36 by madamou           #+#    #+#             */
/*   Updated: 2024/05/24 18:26:30 by madamou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_len_print(int cas)
{
	static int	len;

	if (cas == 0)
		return (len = 0, len);
	if (cas == 1)
	{
		len++;
		return (len);
	}
	return (len);
}

char	*ft_printf_bis(char *print, const char *str, va_list args)
{
	int	i;

	i = 0;
	while (str[i] && print)
	{
		if (ft_check_basic(str, i) == 1)
		{
			print = ft_check_if_format(str, i, print, args);
			i += 2;
		}
		else if (str[i])
			print = ft_str_to_print(print, str[i++]);
		if (!print)
			return (NULL);
	}
	return (print);
}

int	ft_printf(const char *str, ...)
{
	va_list	args;
	char	*print;

	if (!str)
		return (-1);
	print = malloc(sizeof(char));
	if (!print)
		return (0);
	print[0] = '\0';
	ft_len_print(0);
	va_start(args, str);
	print = ft_printf_bis(print, str, args);
	if (!print)
		return (-1);
	return (va_end(args), ft_putstr(print), ft_len_print(2));
}

/*int	main(void)
{
	//ft_printf(" %d\n", ft_printf("je suis en train de test %"));
	//ft_printf(" %d\n", printf("je suis en train de test
				%et imad est gentil"));
}*/
