/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dtunega <dtunega@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/17 12:32:15 by dtunega           #+#    #+#             */
/*   Updated: 2024/05/24 15:34:20 by dtunega          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	ok;

	ok = 0;
	while (s1[ok] != '\0' && s2[ok] != '\0' && (ok < n))
	{
		if (s1[ok] != s2[ok])
			return ((unsigned char)s1[ok] - (unsigned char)s2[ok]);
		ok++;
	}
	if (ok < n)
		return ((unsigned char)s1[ok] - (unsigned char)s2[ok]);
	return (0);
}
