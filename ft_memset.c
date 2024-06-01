/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dtunega <dtunega@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/17 12:42:12 by dtunega           #+#    #+#             */
/*   Updated: 2024/05/24 13:11:28 by dtunega          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	size_t	i;
	char	*ps;

	ps = (char *)s;
	i = 0;
	while (i < n)
	{
		*(unsigned char *)(ps + i) = (unsigned char)c;
		i++;
	}
	return (ps);
}
