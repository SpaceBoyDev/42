/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: darmarti <darmarti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/17 19:06:52 by darmarti          #+#    #+#             */
/*   Updated: 2024/09/20 16:33:08 by darmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ctype.h>
#include <string.h>
#include <strings.h>
#include <stdio.h>
#include <bsd/string.h>

#include "libft.h"

void	test_memset()
{
	printf("\nChecking memset...\n");
	int	str1[50];
	int	str2[50];

	// strcpy(str1, "Hola carambola");
	// puts(str1);
	// strcpy(str2, "Hola carambola");
	// puts(str2);
	ft_memset(str1, 0, sizeof(str1));
	memset(str2, 0, sizeof(str2));
	for (size_t i = 0; i < 50; i++)
	{
		printf("%d ", str1[i]);
	}
	printf("\n\n");
	for (size_t i = 0; i < 50; i++)
	{
		printf("%d ", str2[i]);
	}
}

void	test_bzero()
{
	printf("\nChecking bzero...\n");
	char	arr1[] = "Hola carambola :3";
	char	arr2[] = "Hola carambola :3";

	ft_bzero(arr1, 10);
	bzero(arr2, 10);
	for (size_t i = 0; i < 18; i++)
	{
		printf("%c ", arr1[i]);
	}
	printf("\n\n");
	for (size_t i = 0; i < 18; i++)
	{
		printf("%c ", arr2[i]);
	}
}

void	test_memcpy()
{
	printf("\nChecking memcpy...\n");
	char	arr1[] = "Hello World";
	char	arr2[] = "Hello World";
	char	src[] = "Bye :3";

	printf("Yop :3 -> %s\n", (char *)ft_memcpy(arr1, src, sizeof(src)));
	printf("Librería buena -> %s\n", (char *)memcpy(arr2, src, sizeof(src)));
	for (size_t i = 0; i < strlen(arr1); i++)
	{
		printf("%c ", arr1[i]);
	}
	printf("\n\n");
	for (size_t i = 0; i < strlen(arr1); i++)
	{
		printf("%c ", arr2[i]);
	}
}

void	test_memmove()
{
	printf("\nChecking memmove...\n");
	char	arr1[] = "Hello World";
	char	arr2[] = "Hello World";
	char	src[] = "Bye :3";

	ft_memmove(arr1, src, 6);
	memmove(arr2, src, 6);
	for (size_t i = 0; i < strlen(arr1); i++)
	{
		printf("%c ", arr1[i]);
	}
	printf("\n\n");
	for (size_t i = 0; i < strlen(arr2); i++)
	{
		printf("%c ", arr2[i]);
	}
	printf("\n%s\n", arr1);
	printf("\n%s", arr2);
}

void	test_strlcpy()
{
	printf("\nChecking strlcpy...\n");
	char	arr1[10];
	char	arr2[10];
	char	src[] = "Bye :3";

	printf("\n%zu\n", ft_strlcpy(arr1, src, 10));
	printf("\n%zu\n", strlcpy(arr2, src, 10));
	for (size_t i = 0; i < strlen(arr1); i++)
	{
		printf("%c ", arr1[i]);
	}
	printf("\n\n");
	for (size_t i = 0; i < strlen(arr2); i++)
	{
		printf("%c ", arr2[i]);
	}
	printf("\n%s\n", arr1);
	printf("\n%s", arr2);
}

void	test_strlcat()
{
	printf("\nChecking strlcat...\n");
	char	arr1[10] = "Hello world";
	char	arr2[10] = "Hello world";
	char	src[] = "Bye :3";

	printf("\n%zu\n", ft_strlcat(arr1, src, 20));
	printf("\n%zu\n", strlcat(arr2, src, 20));
	for (size_t i = 0; i < strlen(arr1); i++)
	{
		printf("%c ", arr1[i]);
	}
	printf("\n\n");
	for (size_t i = 0; i < strlen(arr2); i++)
	{
		printf("%c ", arr2[i]);
	}
	printf("\n%s\n", arr1);
	printf("\n%s", arr2);
}

int	main(void)
{
	// test_memset();
	// test_bzero();
	test_memcpy();
	test_memmove();
	test_strlcpy();
	test_strlcat();
	return (0);
}
