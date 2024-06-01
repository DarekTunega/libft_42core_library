/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dtunega <dtunega@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/21 16:12:33 by dtunega           #+#    #+#             */
/*   Updated: 2024/05/24 14:04:53 by dtunega          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

char	*ft_strnstr(const char *big, const char *smol, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	if (*smol == '\0')
		return ((char *)big);
	while (big[i] != '\0' && i < len)
	{
		if (big[i] == smol[0])
		{
			while (big[i + j] == smol[j] && smol[j] != '\0' && i + j < len)
			{
				j++;
			}
		}
		if (smol[j] == '\0')
			return ((char *)&big[i]);
		j = 0;
		i++;
	}
	return (NULL);
}
