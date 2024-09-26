/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: darmarti <darmarti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/25 18:03:27 by darmarti          #+#    #+#             */
/*   Updated: 2024/09/26 20:21:24 by darmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *nptr)
{
	int	num;
	int	negative;

	num = 0;
	negative = 1;
	while (*nptr == ' ' || (*nptr >= 9 && *nptr <= 13))
		++nptr;
	if (*nptr == '-')
	{
		negative = -1;
		++nptr;
	}
	if (*nptr == '+')
		++nptr;
	while (ft_isdigit(*nptr))
	{
		num = (num * 10) + ((int)*nptr - '0');
		++nptr;
	}
	return (num * negative);
}

	// int	pos;
	// int	total;
	// int	sing;

	// total = 0;
	// sing = 1;
	// pos = 0;
	// while (str[pos] == ' ' || (str[pos] >= 9 && str[pos] <= 13))
	// 	pos++;
	// if (str[pos] == '+' || str[pos] == '-')
	// {
	// 	if (str[pos] == '+')
	// 		sing = 1;
	// 	else
	// 		sing = -1;
	// 	pos++;
	// }
	// while (str[pos] >= '0' && str[pos] <= '9')
	// {
	// 	total = total * 10 + (str[pos] - '0');
	// 	pos++;
	// }
	// return (total * sing);
