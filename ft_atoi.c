/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: darmarti <darmarti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/25 18:03:27 by darmarti          #+#    #+#             */
/*   Updated: 2024/09/25 18:12:51 by darmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *nptr)
{
	int	num;

	num = 0;
	while (!ft_isdigit(*nptr))
	{
		if (*nptr == ' ' || *nptr == '\t')
			++nptr;
		else
			return (0);
	}
	while (*nptr)
	{
		num += ((int)*nptr - '0');
		num *= 10;
		++nptr;
	}
	return (num / 10);
}