/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dtunega <dtunega@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/21 14:32:31 by dtunega           #+#    #+#             */
/*   Updated: 2024/05/26 21:07:36 by dtunega          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int		i;
	char	cc;

	cc = c;
	i = 0;
	if (cc == '\0')
		return ((char *)&s[ft_strlen(s)]);
	if (!ft_isascii(cc))
		return (NULL);
	while (s[i] != '\0')
	{
		if (s[i] == cc)
			return ((char *)&s[i]);
		i++;
	}
	return (NULL);
}
