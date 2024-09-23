/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: darmarti <darmarti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/23 17:57:39 by darmarti          #+#    #+#             */
/*   Updated: 2024/09/23 18:38:51 by darmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*found;

	found = 0;
	while (*s)
	{
		if (*s == c)
			found = (char *)s;
		++s;
	}
	if (*s == c)
		found = (char *)s;
	return (found);
}