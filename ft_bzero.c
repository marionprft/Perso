/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpf <mpf@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/20 17:46:10 by mapointi          #+#    #+#             */
/*   Updated: 2026/05/03 14:23:25 by mpf              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		((unsigned char *)s)[i] = 0;
		i++;
	}
	
}

/*int	main(void)
{
	char p[] = {'5', '9', '0', '6'};
	//pq char * et pas void * ? cf prototype
	//bzero s'occupe de cast void * en char * non? 
	// > parce que *p pour etre des int ; void * est fluide
	
	size_t k = 0;
	printf("p_intial :\n");
	while (k < 5)
	{
		printf("%c\n", p[k]);
		k++;
	}
	
	size_t	i = 0;
	printf("Mon test\n");
	ft_bzero(p, 5);
	while (i < 5)
	{
		printf("%c\n", p[i]);
		i++;
	}
}*/