/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dtunega <dtunega@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/26 21:24:43 by dtunega           #+#    #+#             */
/*   Updated: 2024/05/29 14:46:51 by dtunega          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*prop;

	prop = malloc(sizeof(t_list));
	if (!prop)
		return (NULL);
	prop->content = content;
	prop->next = NULL;
	return (prop);
}
