/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: madamou <madamou@contact.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/19 15:06:54 by marvin            #+#    #+#             */
/*   Updated: 2024/06/20 15:12:43 by madamou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int			ft_is_in_charset(char c, char *set);

static int	ft_count_word(char const *s, char *c)
{
	int	i;
	int	cpt;

	cpt = 0;
	i = 0;
	while (s[i])
	{
		while (ft_is_in_charset(s[i], c) && s[i])
			i++;
		while (!ft_is_in_charset(s[i], c) && s[i])
			i++;
		cpt++;
	}
	if (i == 0)
		return (0);
	if (ft_is_in_charset(s[i - 1], c))
		cpt--;
	return (cpt);
}

static char	*ft_norminette(char const *s, int i, int j)
{
	int		k;
	char	*str;

	k = 0;
	str = malloc(sizeof(char) * (j + 1));
	if (str == NULL)
		return (NULL);
	while (k < j)
	{
		str[k] = s[i - j + k];
		k++;
	}
	str[k] = '\0';
	return (str);
}

int	ft_free_split1(char **split, int index)
{
	if (split[index] == NULL)
	{
		while (index >= 0)
			free(split[index--]);
		return (0);
	}
	return (1);
}

static int	ft_split_words(char **split, char const *s, char *c)
{
	int	i;
	int	j;
	int	index;

	i = 0;
	index = 0;
	while (s[i])
	{
		while (ft_is_in_charset(s[i], c) && s[i])
			i++;
		j = 0;
		while (!ft_is_in_charset(s[i], c) && s[i])
		{
			i++;
			j++;
		}
		if (!ft_is_in_charset(s[i - 1], c))
		{
			split[index] = ft_norminette(s, i, j);
			if (ft_free_split1(split, index++) == 0)
				return (0);
		}
	}
	split[index] = 0;
	return (1);
}

char	**ft_split(char *s, char *c)
{
	char	**split;

	if (!s)
	{
		split = malloc(sizeof(char *));
		if (!split)
			return (NULL);
		split[0] = NULL;
		return (split);
	}
	split = malloc(sizeof(char *) * (ft_count_word(s, c) + 1));
	if (split == NULL)
		return (NULL);
	if (ft_split_words(split, s, c) == 0)
		return (free(split), NULL);
	return (split);
}

/*int	main(void)
{
	char **test;
	int i;

	i = 0;
	test = ft_split("je suis représentée comme tout!", " e");
	if (test == NULL)
	{
		printf("tout est null\n");
		return (0);
	}
	while (test[i])
		printf("%s\n", test[i++]);
	if (test[i] == NULL)
		printf("%u", 42);
}*/
