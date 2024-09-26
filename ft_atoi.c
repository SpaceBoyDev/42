/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dario <dario@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/25 18:03:27 by darmarti          #+#    #+#             */
/*   Updated: 2024/09/26 14:39:30 by dario            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *nptr)
{
	int	num;
	int	negative;

	num = 0;
	negative = 1;
	while (!ft_isdigit(*nptr))
	{
		if (*nptr == ' ' || *nptr == '\t')
			++nptr;
		else if (*nptr++ == '-')
		{
			if (ft_isdigit(*nptr))
				negative = -1;
			else
				return (0);
		}
		else
			return (0);
	}
	while (*nptr && ft_isdigit(*nptr))
	{
		num += ((int)*nptr++ - '0');
		num *= 10;
	}
	return (num / 10 * negative);
}