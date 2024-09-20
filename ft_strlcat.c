/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: darmarti <darmarti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/20 16:13:06 by darmarti          #+#    #+#             */
/*   Updated: 2024/09/20 16:55:32 by darmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	len;
	size_t	i;

	if (size > ft_strlen(dst))
		len = ft_strlen(src) + ft_strlen(dst);
	else
		len = ft_strlen(src) + size;
	i = 0;
	while (*src && size > (i + 1))
	{
		dst[i] = *src++;
		++i;
	}
	++dst;
	*dst = '\0';
	return (len);
}