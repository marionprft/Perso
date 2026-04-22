/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapointi <mapointi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/20 17:46:10 by mapointi          #+#    #+#             */
/*   Updated: 2026/04/21 17:44:21 by mapointi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void *ft_memcpy(void *restrict dst, const void *restrict src, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{	
		dst[i] = src[i];
		i++;
	}

}

#include<stdio.h>

int main(void)
{
	void	*restrict dst;
	const void	*restrict src;
	size_t	n;

	//src[9] = "jusdeaux";
	n = 3;
	printf("Moi :\n");
	printf("%s\n", ft_memcpy(dst[n], "forsure", n));

	return (0);
}