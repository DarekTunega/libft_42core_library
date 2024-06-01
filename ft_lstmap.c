/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dtunega <dtunega@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/30 18:18:51 by dtunega           #+#    #+#             */
/*   Updated: 2024/05/30 18:44:43 by dtunega          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*elem;
	t_list	*sexy_lst;

	sexy_lst = NULL;
	if (!lst)
		return (NULL);
	while (lst)
	{
		elem = ft_lstnew(f(lst->content));
		if (!elem)
		{
			ft_lstdelone(elem, del);
			return (NULL);
		}
		ft_lstadd_back(&sexy_lst, elem);
		lst = lst->next;
	}
	return (sexy_lst);
}
