/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: darmarti <darmarti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/15 19:25:23 by darmarti          #+#    #+#             */
/*   Updated: 2024/10/15 20:58:51 by darmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*get_next_line(int fd)
{
	int		sz;
    char	*c;

	c = (char*)calloc(BUFFER_SIZE, sizeof(char));
	if (fd < 0)
        return (NULL);

    sz = read(fd, c, BUFFER_SIZE);
    printf("called read(% d, c, 10). returned that"
		" %d bytes were read.\n",
           fd, sz);
    c[sz] = '\0';
    printf("Those bytes are as follows: % s\n", c);
	return (NULL);
}
