/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone_bonus.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: madamou <madamou@contact.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/25 15:03:02 by madamou           #+#    #+#             */
/*   Updated: 2024/05/19 16:03:56 by madamou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	if (!lst || !del)
		return ;
	del(lst->content);
	free(lst);
	lst = NULL;
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
	// Création d'un élément de liste
	t_list *elem = ft_lstnew1("Element à supprimer");

	// Affichage du contenu de l'élément avant la suppression
	printf("Contenu de l'élément avant la suppression : %s\n",
		(char *)elem->content);

	// Appel de la fonction ft_lstdelone pour supprimer l'élément
	ft_lstdelone(elem, &ft_del_lst);

	// Affichage d'un message après la suppression
	printf("L'élément a été supprimé avec succès. Verifier avec valgrind\n");

	return (0);
}*/
