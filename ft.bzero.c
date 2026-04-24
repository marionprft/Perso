/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft.bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapointi <mapointi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/20 17:46:10 by mapointi          #+#    #+#             */
/*   Updated: 2026/04/24 12:25:28 by mapointi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <strings.h>

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

/*#include<stdio.h>

int	main(void)
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

	/*Pourquoi cette version ne fct pas :
	
	printf("Mon test\n");
	while (i < 5)
	{
		printf("%c\n", ft_bzero(p[i], 5));
		i++
	}
	 > Parce ft_bzero ne prend pas p[i] en parametre
	
	char pOG[] = {5, 9, 0, 6};
	size_t j = 0;
	
	printf("OG test\n");
	ft_bzero(pOG, 5);
	while (j < 5)
	{
		printf("%c\n", pOG[i]);
		j++;
	}

	return (0);

	/* Rien ne s'affiche, juste 5 lignes vides.
	Comment faire apparaitre les "0" ?
	> Ce n'est pas la valeur 0, c'est le \0 qu'on affiche.
}*/