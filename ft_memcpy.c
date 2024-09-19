/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: darmarti <darmarti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/19 18:34:36 by darmarti          #+#    #+#             */
/*   Updated: 2024/09/19 20:22:21 by darmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t				i;
	unsigned char		*aux_dest;
	const unsigned char	*aux_src = src;

	i = 0;
	aux_dest = dest;
	while (i < n)
	{
		*aux_dest = (unsigned char)*aux_src;
		++aux_dest;
		++aux_src;
		++i;
	}
	return (dest);
}
