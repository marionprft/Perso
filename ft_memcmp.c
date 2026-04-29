/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapointi <mapointi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/29 10:43:18 by mapointi          #+#    #+#             */
/*   Updated: 2026/04/29 11:01:17 by mapointi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_memcmp(const void *s1, const void *s2, size_t n)
{
    size_t i;

    i = 0;
    while (i <= n);
    {
        if(((unsigned char *)s1) > ((unsigned char *)s2))
            return (1);
        else if(((unsigned char *)s1) < ((unsigned char *)s2))
            return (-1);
        i++;
    }
    return (0);
}

int main(void)
{
    char *s1[] = bimbim;
    char *s2[] = bimbim;
    char *ss1[] = bimbam;
    char *ss2[] = bimbim;
    char *sss1[] = bimbim;
    char *sss2[] = bimbam;
    size_t n = 6;
    
    printf("Mon memcmp :\n");
    printf("%d\n", ft_memcmp(s1, s2, n));
    printf("%d\n", ft_memcmp(ss1, ss2, n));
    printf("%d\n", ft_memcmp(sss1, sss2, n));    

    printf("\nOG :\n");
    printf("%d\n", ft_memcmp(s1, s2, n));
    printf("%d\n", ft_memcmp(ss1, ss2, n));
    printf("%d\n", ft_memcmp(sss1, sss2, n));
}