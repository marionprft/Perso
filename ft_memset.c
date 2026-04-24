/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapointi <mapointi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/20 17:46:10 by mapointi          #+#    #+#             */
/*   Updated: 2026/04/24 13:51:07 by mapointi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stddef.h>

void *ft_memset(void *b, int c, size_t n)
{
	size_t	i;
	
	// unsigned char *str;

	// str = (unsigned char) *b;
	
	i = 0;
	while (i < n)
	{
		((unsigned char *)b)[i] = (unsigned char)c;
		i++;
	}
	return (b);
}

size_t  ft_strlen(const char *src)
{
    size_t i;

    i = 0;
    while (src[i])
        i++;
    return (i);
}

#include <stdio.h>
#include<string.h>

int main(void)
{
	//test 1
	char ptr[4] = {8, 6, 0}; // ptr[4] => 3 cases + 1 case pour '\0'

	printf("Mon test 1\n");
	size_t i = 0;
	ft_memset(ptr, 1, 3); // 3 => a taille de ptr / nbr de case (sans '\0')
	while (i < ft_strlen(ptr)) //e compteur part de 0 aors que strlen va compter a partir de 1 
	{
		printf("%i\n", ptr[i]);
		i++;
	}

	//test 2
	char p2[5];
	printf("Mon test 2\n");
	size_t j = 0;
	ft_memset(p2, 8, 4);
	while (j < ft_strlen(p2))
	{
		printf("%i\n", p2[j]);
		j++;
	}

	//OG version
	char pOG[4] = {8, 6, 0};
	printf("OG test 1\n");
	//printf("Set initial : %c\n", pOG);
	size_t k = 0;
	memset(pOG, 1, 3);
	while (k < ft_strlen(pOG))
	{
		printf("%i\n", pOG[k]);
		k++;
	}

	char pOG2[5];
	printf("OG test 2\n");
	//printf("Set initial 2 : %c\n", pOG2);
	memset(pOG2, 8, 4);
	size_t l = 0;
	while (l < ft_strlen(pOG2))
	{
		printf("%i\n", pOG2[l]);
		l++;
	}
	
	
	return (0);
}