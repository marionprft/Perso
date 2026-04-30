/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapointi <mapointi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/21 17:29:06 by mapointi          #+#    #+#             */
/*   Updated: 2026/04/30 23:30:38 by mapointi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

size_t	ft_strlen(const char *src)
{
	size_t	i;

	i = 0;
	while (src[i])
		i++;
	return (i);
}

/*#include <stdio.h>
#include <ctype.h>

int	main(void)
{
	printf("Moi\n");
	printf("%ld\n", ft_strlen("aa"));
	printf("%ld\n", ft_strlen(" "));
	printf("%ld\n", ft_strlen("0]?"));

	printf("OG\n");
	printf("%ld\n", strlen("bonjour bonjour"));
	printf("%ld\n", strlen(" "));
	printf("%ld\n", strlen("0]?"));

	return (0);
}*/