/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/19 15:07:02 by marvin            #+#    #+#             */
/*   Updated: 2024/03/19 15:07:02 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;

	i = -1;
	while (str[++i])
	{
		j = 0;
		while (str[i + j] == to_find[j])
			j++;
		if (!to_find[j])
			return (&str[i]);
	}
	return (NULL);
}

/*int main(void)
{
	char str[] = "bonjourl le monde je m'appele mouss";
	char to_find[] = "ele";
	printf("%s\n", ft_strstr(str, to_find));
}*/