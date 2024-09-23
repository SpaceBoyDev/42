/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: darmarti <darmarti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/20 16:13:06 by darmarti          #+#    #+#             */
/*   Updated: 2024/09/23 17:44:58 by darmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	unsigned int	result;
	unsigned int	i;
	unsigned int	j;

	result = 0;
	i = 0;
	j = 0;
	while (dst[i] != '\0')
		i++;
	while (src[result] != '\0')
		result++;
	if (size <= 1)
	{
		result += size;
		return (result);
	}
	else
		result += i;
	while ((i + 1) < size && src[j] != '\0')
	{
		dst[i] = src[j];
		i++;
		j++;
	}
	dst[i] = '\0';
	return (result);
}
