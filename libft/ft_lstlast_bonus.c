/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: madamou <madamou@contact.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/24 22:44:16 by madamou           #+#    #+#             */
/*   Updated: 2024/03/24 23:13:15 by madamou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	while (lst && lst->next != NULL)
		lst = lst->next;
	return (lst);
}

/*static t_list	*ft_lstnew1(void *content)
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
	// Création de quelques éléments de liste
	t_list *elem1 = ft_lstnew1("Elem1");
	t_list *elem2 = ft_lstnew1("Elem2");
	t_list *elem3 = ft_lstnew1("Elem3");

	// Liaison des éléments pour former une liste chaînée
	elem1->next = elem2;
	elem2->next = elem3;

	// Appel ft_lstlast pour obtenir le dernier élément de la liste
	t_list *last_elem = ft_lstlast(elem1);

	// Vérification du résultat
	if (last_elem)
		printf("Last element of the list: %s\n", (char *)last_elem->content);
	else
		printf("The list is empty!\n");

	return (0);
}*/