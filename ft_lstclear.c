/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dtunega <dtunega@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/30 16:53:09 by dtunega           #+#    #+#             */
/*   Updated: 2024/05/30 17:16:46 by dtunega          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*prev;
	t_list	*current;

	if (!lst || !del)
		return ;
	prev = *lst;
	while (prev)
	{
		current = prev->next;
		del(prev->content);
		free(prev);
		prev = current;
	}
	*lst = NULL;
}
