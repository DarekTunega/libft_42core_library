/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dtunega <dtunega@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/21 14:40:14 by dtunega           #+#    #+#             */
/*   Updated: 2024/05/21 14:40:14 by dtunega          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*mlc;
	int		len;

	len = ft_strlen(s);
	mlc = (char *)malloc(len + 1);
	if (!mlc)
		return (NULL);
	ft_memcpy(mlc, s, len);
	mlc[len] = '\0';
	return (mlc);
}
