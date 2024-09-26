/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dario <dario@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/17 19:06:52 by darmarti          #+#    #+#             */
/*   Updated: 2024/09/27 01:46:42 by dario            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ctype.h>
#include <string.h>
#include <strings.h>
#include <stdio.h>
#include <bsd/string.h>
#include <stdlib.h>

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
	char	arr1[] = "Hello ";
	char	arr2[] = "Hello ";
	char	src[] = "World";

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
// TODO: Terminarlo que está mal :3
void	test_strlcat()
{
	printf("\nChecking strlcat...\n");
	char	arr1[] = "Hello world";
	char	arr2[] = "Hello world";
	char	src[] = "Bye :3";

	printf("\n%zu\n", ft_strlcat(arr1, src, 2));
	printf("\n%zu\n", strlcat(arr2, src, 2));
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

void	test_toupper()
{
	printf("\nChecking toupper...\n");
	char	c = 'z';

	printf("%c\n", ft_toupper(c));
	printf("%c\n", toupper(c));
}

void	test_tolower()
{
	printf("\nChecking tolower...\n");
	char	c = 'A';

	printf("%c\n", ft_tolower(c));
	printf("%c\n", tolower(c));
}

void	test_strchr()
{
	printf("\nChecking strchr...\n");
	char	str[] = "Hola :3";
	char	c = 'l';

	printf("%pc\n", ft_strchr(str, c));
	printf("%pc\n", strchr(str, c));
}

void	test_strrchr()
{
	printf("\nChecking strrchr...\n");
	char	str[] = "Holalalo :3";
	char	c = ':';

	printf("%pc\n", ft_strrchr(str, c));
	printf("%pc\n", strrchr(str, c));
}

void	test_strncmp()
{
	printf("\nChecking strncmp...\n");
	char	str1[] = "test\200";
	char	str2[] = "test\0";
	int		len = 6;

	printf("%d\n", ft_strncmp(str1, str2, len));
	printf("%d\n", strncmp(str1, str2, len));
}

void	test_memchr()
{
	printf("\nChecking memchr...\n");
	int	arr[] = {1, 2, 3, 4};
	int	c = 2;
	int	n = 5;

	printf("%pc\n", ft_memchr(arr, c, n));
	printf("%pc\n", memchr(arr, c, n));
}

void	test_memcmp()
{
	printf("\nChecking memcmp...\n");
	char	str1[] = "Hola :3";
	char	str2[] = "Hola :3";
	int		n = 5;

	printf("%d\n", ft_memcmp(str1, str2, n));
	printf("%d\n", memcmp(str1, str2, n));
}

void	test_atoi()
{
	printf("\nChecking atoi...\n");
	char	str[] = "-123";

	printf("%d\n", ft_atoi(str));
	printf("%d\n", atoi(str));
}

void	test_calloc()
{
	printf("\nChecking calloc...\n");
	char		*ptr;
	int		num = 10;

	ptr = ft_calloc(6, sizeof(char));
	// ptr = calloc(6, sizeof(char));
	for (size_t i = 0; i < (size_t)num; i++)
	{
		if (ptr[i] == '\0')
			printf("%ld, ", i);
	}

}

int	main(void)
{
	test_atoi();
	// test_calloc();
	return (0);
}