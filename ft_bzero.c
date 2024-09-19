/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: darmarti <darmarti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/19 18:23:04 by darmarti          #+#    #+#             */
/*   Updated: 2024/09/19 18:26:33 by darmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_bzero(void *s, size_t n)
{
	size_t	i;
	unsigned char	*aux;

	i = 0;
	aux = s;
	while (i < n)
	{
		*aux = '\0';
		++aux;
		++i;
	}
}