/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: madamou <madamou@contact.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/23 12:47:30 by madamou           #+#    #+#             */
/*   Updated: 2024/05/19 13:28:43 by madamou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char				*str;
	size_t				i;
	unsigned long long	check;

	i = 0;
	check = (unsigned long long)len;
	if (!s)
		return (NULL);
	if (len >= ft_strlen(s) && start <= ft_strlen(s))
		str = malloc(sizeof(char) * ((ft_strlen(s) - start) + 1));
	else if (start > ft_strlen(s))
		str = malloc(sizeof(char) * 1);
	else if (start + len > ft_strlen(s))
		str = malloc(sizeof(char) * (ft_strlen(s) - start + 1));
	else
		str = malloc(sizeof(char) * (len + 1));
	if (!str)
		return (NULL);
	while (i < check && (start <= ft_strlen(s)) && s[start + i])
	{
		str[i] = s[start + i];
		i++;
	}
	str[i] = '\0';
	return (str);
}

/*int main(void)
{
 	char * s = ft_substr("hola", 2, 3);
 	if (!strcmp(s, ""))
 		printf("yes\n");
 	else
 		printf("no\n");
}*/
