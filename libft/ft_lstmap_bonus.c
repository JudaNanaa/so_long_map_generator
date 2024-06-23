/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: madamou <madamou@contact.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/25 23:00:58 by madamou           #+#    #+#             */
/*   Updated: 2024/06/06 11:36:06 by madamou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*result;
	t_list	*final;

	final = NULL;
	if (!lst || !f || !del)
		return (NULL);
	while (lst)
	{
		result = ft_lstnew(lst->content);
		if (!result)
		{
			ft_lstclear(&final, del);
			return (NULL);
		}
		result->content = f(result->content);
		ft_lstadd_back(&final, result);
		lst = lst->next;
	}
	return (final);
}

/*void *change_capitalization(void *str) {
	char *s = (char *)str;
	for (int i = 0; s[i] != '\0'; i++) {
		if (s[i] >= 'a' && s[i] <= 'z') {
			s[i] -= 32;
		}
	}
	return ((void *)s);
}

void	print_list(t_list *lst) {
	while (lst) {
		printf("%s -> ", (char *)lst->content);
		lst = lst->next;
	}
	printf("NULL\n");
}

void	del_content(void *content) {
	free(content);
}

int	main(void) {
	t_list *lst = NULL;
	ft_lstadd_back(&lst, ft_lstnew(strdup("hello")));
	ft_lstadd_back(&lst, ft_lstnew(strdup("world")));
	ft_lstadd_back(&lst, ft_lstnew(strdup("openai")));

	printf("Liste initiale : ");
	print_list(lst);

	t_list *new_lst = ft_lstmap(lst, &change_capitalization, &del_content);
	printf("Nouvelle liste avec la capitalisation modifiée : ");
	print_list(new_lst);

	return (0);
}*/
