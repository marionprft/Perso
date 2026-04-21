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
    return (i - 1);
}

#include <stdio.h>
#include <ctype.h>

int main(void)
{
    printf("Moi\n");
    printf("%u\n", ft_strlen("bonjour toi"));
    printf("%u\n", ft_strlen(" "));
    printf("%u\n", ft_strlen("0]?"));

    printf("OG\n");
    printf("%u\n", strlen("bonjour toi"));
    printf("%u\n", strlen(" "));
    printf("%u\n", strlen("0]?"));

    return (0);
}