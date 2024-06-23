/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front_bonus.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: madamou <madamou@contact.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/24 14:05:53 by madamou           #+#    #+#             */
/*   Updated: 2024/05/17 18:05:33 by madamou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (!lst || !new)
		return ;
	new->next = *lst;
	*lst = new;
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
}*/

/*int main(void)
{
	char chain[] = "oui je test";
	t_list *test = ft_lstnew1(chain);
	char *oui = (char *)test->content;
	printf("%s\n", oui);
	printf("%p\n", test);

	t_list **ptr = &test;
	t_list *moussa = ft_lstnew1("je sais");
	ft_lstadd_front(ptr, moussa);
	printf("%p\n", moussa->next);
	printf("Test des 1er pointeur\n");
	printf("%p\n", *ptr);
	printf("%p\n", moussa);
}*/