/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapointi <mapointi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/20 12:08:00 by mapointi          #+#    #+#             */
/*   Updated: 2026/04/21 17:48:33 by mapointi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalpha(int c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
		return (1);
	else
		return (0);
}


/*#include<stdio.h>
#include<ctype.h>

int main(void)
{
	printf("Moi\n");
	printf("%d\n", ft_isalpha(204));
	printf("%d\n", ft_isalpha(100));

	printf("OG\n");
	printf("%d\n", isalpha(204));
	printf("%d\n", isalpha(100));

	return (0);
}*/