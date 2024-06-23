/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils_bonus.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: madamou <madamou@contact.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/26 16:39:33 by itahri            #+#    #+#             */
/*   Updated: 2024/06/06 11:17:59 by madamou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line_bonus.h"
#include <string.h>

int	ft_strlen_gnl(char *str, int cas)
{
	int	i;

	i = 0;
	if (cas == 1)
	{
		while (str && str[i])
			i++;
	}
	if (cas == 2)
	{
		while (str && str[i] != '\n')
			i++;
		i++;
	}
	return (i);
}

int	ft_check_if_newline(char *sortie)
{
	int	i;

	i = 0;
	if (!sortie)
		return (0);
	while (sortie[i])
	{
		if (sortie[i] == '\n')
			return (1);
		i++;
	}
	return (0);
}

void	ft_format_sortie(char *sortie)
{
	int	i;

	i = 0;
	while (sortie[i] != '\n')
		i++;
	sortie[++i] = '\0';
}
