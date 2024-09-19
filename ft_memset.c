/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: darmarti <darmarti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 19:27:30 by darmarti          #+#    #+#             */
/*   Updated: 2024/09/19 18:15:43 by darmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	size_t		size;
	unsigned char	*str;

	size = 0;
	str = s;
	while (size < n)
	{
		*str = (unsigned char) c;
		++str;
		++size;
	}
	return (s);
}