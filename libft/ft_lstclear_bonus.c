/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: madamou <madamou@contact.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/25 15:22:12 by madamou           #+#    #+#             */
/*   Updated: 2024/05/19 15:59:42 by madamou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*buff;

	while (*lst)
	{
		buff = (*lst)->next;
		ft_lstdelone(*lst, del);
		*lst = buff;
	}
	free(*lst);
	*lst = NULL;
}

/*static void ft_del_lst(void *lst)
{
	free(lst);
}

static t_list	*ft_lstnew1(void *content)
{
	t_list	*new;

	new = malloc(sizeof(t_list) * 1);
	if (!new)
		return (NULL);
	new->content = content;
	new->next = NULL;
	return (new);
}

int	main(void)
{
	char *str1 = "Element 1";
	char *str2 = "Element 2";
	char *str3 = "Element 3";
	// Création de quelques éléments de liste
	t_list *elem1 = ft_lstnew1(str1);
	t_list *elem2 = ft_lstnew1(str2);
	t_list *elem3 = ft_lstnew1(str3);

	// Liaison des éléments pour former une liste chaînée
	elem1->next = elem2;
	elem2->next = elem3;

	// Appel fonction ft_lstclear pour supprimer tous les éléments
	ft_lstclear(&elem1, &ft_del_lst);

	// Vérification du résultat (devrait afficher "Liste vidée : NULL")
	if (elem1 == NULL)
	{
		printf("Liste vidée : NULL\n");
	}
	else
	{
		printf("Erreur : La liste n'est pas vide après suppression.\n");
	}

	return (0);
}*/
