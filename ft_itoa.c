/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dtunega <dtunega@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/21 13:14:43 by dtunega           #+#    #+#             */
/*   Updated: 2024/05/30 18:03:50 by dtunega          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <stdlib.h>
#include <stdio.h>
#include <assert.h>

int	get_num_length(int n)
{
	int	i;

	i = 0;
	if (n <= 0)
		i++;
	while (n != 0)
	{
		n /= 10;
		i++;
	}
	return (i);
}

char	*return_min_int(int n)
{
	char	*mn;

	mn = malloc(12 * sizeof(char));
	if (mn == NULL)
		return (NULL);
	ft_strlcpy(mn, "-2147483648", get_num_length(n) + 1);
	return (mn);
}

void	do_magic(char *ptr, int len, int n)
{
	while (n != 0)
	{
		ptr[--len] = (n % 10) + '0';
		n /= 10;
	}
}

char	*ft_itoa(int n)
{
	int		length;
	char	*ptr;

	length = get_num_length(n);
	if (n == -2147483648)
	{
		ptr = return_min_int(n);
		return (ptr);
	}
	ptr = malloc(length + 1);
	if (!ptr)
		return (NULL);
	ptr[length] = '\0';
	if (n == 0)
		ptr[0] = '0';
	if (n < 0)
	{
		ptr[0] = '-';
		n = -n;
	}
	do_magic(ptr, length, n);
	return (ptr);
}
