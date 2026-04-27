/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapointi <mapointi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/27 21:10:31 by mapointi          #+#    #+#             */
/*   Updated: 2026/04/27 21:52:43 by mapointi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    *ft_memchr(const void *s, int c, size_t n)
{
    size_t i;

    const char* mem = (char*) s;
    i = 0;
    while (i < n)
    {
        if (mem[i] == c)
            return (s);
        i++;
    }
    return (NULL);
}

int main(void)
{
    char *s = "techno, toujours pareil, boom boom dans les oreilles";
    int c = 'm';
    size_t n = 30;

    printf("Mon memchr :\n");
    printf("%s\n", ft_memchr(s, c, n));

    char *s = "techno, toujours pareil, boom boom dans les oreilles";
    int c = 'm';
    size_t n = 30;

    printf("\nOG :\n");
    printf("%s\n", memchr(s, c, n));
}