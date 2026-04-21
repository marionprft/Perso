/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapointi <mapointi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/21 17:19:26 by mapointi          #+#    #+#             */
/*   Updated: 2026/04/21 17:28:20 by mapointi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isprint(int c)
{
	if (c >= ' ' && c <= '~')
		return (1);
	else
		return (0);
}

/*#include <stdio.h>

int main(void)
{
	printf("%d\n", ft_isprint('f'));
	printf("%d\n", ft_isprint(127));
	printf("%d\n", ft_isprint(0));
	printf("%d\n", ft_isprint('0'));

	return (0);

}*/