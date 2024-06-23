/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: madamou <madamou@contact.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/23 14:34:10 by madamou           #+#    #+#             */
/*   Updated: 2024/06/23 17:36:03 by madamou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/so_long_generator.h"

int	main(int argc, char **argv)
{
	char	**numbers;
	char	**map;

	if (argc != 4)
		return (ft_printf("Il faut 4 arguments\n"), 1);
	numbers = ft_split(argv[1], "xX");
	if (!numbers)
		return (ft_printf("Probleme lors du split\n"), 1);
	map = ft_create_map(numbers, argv[2], argv[3]);
	ft_free_split(numbers);
	if (!map)
		return (ft_printf("Error when creating the map\n"), 1);
	return (0);
}
