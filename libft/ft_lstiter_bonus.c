/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: madamou <madamou@contact.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/25 20:10:14 by madamou           #+#    #+#             */
/*   Updated: 2024/03/25 23:52:29 by madamou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	t_list	*buff;

	buff = lst;
	while (buff)
	{
		f(buff->content);
		buff = buff->next;
	}
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

static void	print_content(void *content)
{
	char	*str;

	str = (char *)content;
	printf("%s\n", str);
}

int	main(void)
{
	// Création de quelques éléments de liste
	t_list *elem1 = ft_lstnew1("Element 1");
	t_list *elem2 = ft_lstnew1("Element 2");
	t_list *elem3 = ft_lstnew1("Element 3");

	// Liaison des éléments pour former une liste chaînée
	elem1->next = elem2;
	elem2->next = elem3;

	// Affichage du contenu de la liste avant l'application de la fonction
	printf("Contenu de la liste avant l'application de la fonction :\n");
	ft_lstiter(elem1, &print_content);

	// Application fonction ft_lstiter pour afficher contenu chaque élément
	printf("\nContenu de la liste après l'application de la fonction :\n");
	ft_lstiter(elem1, &print_content);

	return (0);
}*/