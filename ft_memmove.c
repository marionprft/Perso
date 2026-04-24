/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapointi <mapointi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/24 18:02:39 by mapointi          #+#    #+#             */
/*   Updated: 2026/04/24 19:05:11 by mapointi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<string.h>

void    *ft_memmove(void *dst, const void *src, size_t n)
{
    unsigned char *d = (unsigned char *)dst;
    unsigned char *s = (unsigned char *)src;
    size_t i;

    i = n - 1;
    if(d > s)
    {
        while(i != 0)
        {
            d[i] = s[i];
            i--;
        }
    }
    else
    {
        while(i < n)
        {
            d[i] = s[i];
            i++;
        }
    }
    return (d);
}

#include<stdio.h>

int main(void)
{
    char dst[60] = "";
    char src[] = "totallyspies";
    size_t n = 4;
    
    printf("Mon memmove :\n");
    printf("%s\n", (unsigned char *)ft_memmove(dst, src, n));

    printf("\nOG :\n");
    printf("%s\n", (unsigned char *)memmove(dst, src, n));
}