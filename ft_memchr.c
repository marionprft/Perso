/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapointi <mapointi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/27 21:10:31 by mapointi          #+#    #+#             */
/*   Updated: 2026/04/29 10:42:49 by mapointi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    *ft_memchr(const void *s, int c, size_t n)
{
    size_t i;
    char * mem;
    
    mem = (char *) s;
    i = 0;
    while (i < n)
    {
        if (mem[i] == c)
        {
            return (mem + i);
            // on retourne tout a partir de l`adresse en i.
        }        
        i++;
    }
    return (NULL);
}

int main(void)
{
    const char s[] = "techno, toujours pareil, boom boom dans les oreilles";
    int c = 'm';
    size_t n = 30;

    printf("Mon memchr :\n");
    printf("%s\n", (char *)ft_memchr(s, c, n));

    const char ss[] = "techno, toujours pareil, boom boom dans les oreilles";
    int cc = 'm';
    size_t nn = 30;

    printf("\nOG :\n");
    printf("%s\n", (char *)memchr(ss, cc, nn));
}