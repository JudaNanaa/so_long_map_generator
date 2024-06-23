/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: madamou <madamou@contact.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/23 15:10:39 by madamou           #+#    #+#             */
/*   Updated: 2024/05/17 17:15:46 by madamou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// static char	ft_test(unsigned int i, char c);

static int	ft_lenstr(char *s)
{
	int	i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*str;
	unsigned int	i;
	char			*true_s;

	i = -1;
	if (!s)
		return (NULL);
	true_s = (char *)s;
	str = malloc(sizeof(char) * (ft_lenstr(true_s) + 1));
	if (!str)
		return (NULL);
	while (true_s[++i])
		str[i] = f(i, true_s[i]);
	str[i] = '\0';
	return (str);
}

// static char ft_test(unsigned int i, char c)
// {
// 	if (i < 10)
// 		c++;
// 	else
// 		c--;
// 	return (c);
// }

// int main(void)
// {
// 	char chain[] = "aaaaaaaaaacccccccccc";
// 	printf("%s\n", ft_strmapi(chain, &ft_test));
// }