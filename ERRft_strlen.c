/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapointi <mapointi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/21 17:29:06 by mapointi          #+#    #+#             */
/*   Updated: 2026/04/21 18:34:48 by mapointi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include<string.h>

size_t  ft_strlen(const char *src)
{
    size_t i;

    i = 0;
    while (src)
        i++;
    return (i);
}

#include <stdio.h>
#include <ctype.h>

int main(void)
{
    printf("Moi\n");
    printf("%zu\n", ft_strlen("bonjour toi"));
    printf("%zu\n", ft_strlen(" "));
    printf("%zu\n", ft_strlen("0]?"));

    printf("OG\n");
    printf("%lu\n", strlen("bonjour toi"));
    printf("%lu\n", strlen(" "));
    printf("%lu\n", strlen("0]?"));

    return (0);
}