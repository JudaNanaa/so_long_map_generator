/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long_generator.h                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: madamou <madamou@contact.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/23 14:35:21 by madamou           #+#    #+#             */
/*   Updated: 2024/06/23 17:32:16 by madamou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SO_LONG_GENERATOR_H
# define SO_LONG_GENERATOR_H

# include "../libft/libft.h"
# include <time.h>

int		ft_check_if_playable(char **map, int x, int y);

char	**ft_create_map(char **number, char *coins, char *outfile);
char	**ft_place_sprite(char **map, int x, int y);

void	ft_place_player(char **map, int x, int y);
void	ft_place_collectibles(char **map, int x, int y, int coins);
void	ft_place_exit(char **map, int x, int y);
void	ft_place_wall(char **map);

#endif // !SO_LONG_GENERATOR_H
