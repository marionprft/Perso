/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapointi <mapointi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/26 20:00:48 by mapointi          #+#    #+#             */
/*   Updated: 2026/04/26 21:24:28 by mapointi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t  ft_strlcat(char *dst, const char *src, size_t size)
{
    size_t  i;
    size_t  j;

    i = 0;
    while (dst[i])
    {
        i++;
    }
    j = 0;
    while (src[j])
    {
        dst[i] = src[j];
        i++;
        j++;
    }
    dst[size] = 0;

    return (ft_strlen(dst) + ft_strlen(src));
}

#include <stdio.h>

#define SIZE 50

int main(void)
{
    char d[SIZE] = "michael";
    char s[] = "Klaxon";

    printf("Mon strlcat :\n");
    ft_strlcat(d, s, SIZE);
    printf("%s\n", d);

    char dOG[SIZE] = "michael";
    char sOG[] = "Klaxon";
    
    printf("\nOG :\n");
    strlcat(dOG, sOG, SIZE);
    printf("%s\n", d);
    
}