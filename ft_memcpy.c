/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapointi <mapointi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/20 17:46:10 by mapointi          #+#    #+#             */
/*   Updated: 2026/04/26 20:04:02 by mapointi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <string.h>

void *ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{	
		((unsigned char *)dst)[i] = ((unsigned char *)src)[i];
		i++;
	}

	return (dst);
}

#include<stdio.h>
/*
int main(void)
{
	char	dst[12]; //impossible avec dst[] < src[]
	char *src = "8morts6blesses";
	size_t	n = 8;

	printf("Mon memcpy :\n");
	printf("%s\n", (unsigned char *)ft_memcpy(dst, src, n));

	printf("\nOG :\n");
	printf("%s\n", (unsigned char *)memcpy(dst, src, n));
	
	return (0);
}*/
