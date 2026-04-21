/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapointi <mapointi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/21 16:45:09 by mapointi          #+#    #+#             */
/*   Updated: 2026/04/21 17:12:29 by mapointi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isascii(int c)
{
	if (c > 127)
		return (0);
	else if (c < 0)
		return (0);
	else
		return (1);
}

/*#include<stdio.h>

int main(void)
{
	printf("%d\n", ft_isascii('h'));
	printf("%d\n", ft_isascii(0));
	printf("%d\n", ft_isascii(-5));
	printf("%d\n", ft_isascii(205));

	return (0);

}*/