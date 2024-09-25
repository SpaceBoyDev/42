/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dario <dario@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/20 16:13:06 by darmarti          #+#    #+#             */
/*   Updated: 2024/09/24 21:37:38 by dario            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	src_len;
	size_t	dst_len;
	size_t	result;

	src_len = ft_strlen(src);
	dst_len = ft_strlen(dst);
	result = 0;
	if (size > dst_len)
		result = src_len + dst_len;
	else
		result = src_len + size;
	while (*src && size > (dst_len + 1))
	{
		dst[dst_len] = *src;
		++src;
		++dst_len;
	}
	dst[dst_len] = '\0';
	return (result);
}
