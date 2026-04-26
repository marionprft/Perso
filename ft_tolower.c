/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapointi <mapointi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/26 22:57:38 by mapointi          #+#    #+#             */
/*   Updated: 2026/04/26 23:02:46 by mapointi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_tolower(int c)
{
    if (c >= 'A' && c <= 'Z' )
    {
        c = c + 32;
    }

    return (c);
}
#include <stdio.h>

int main(void)
{
    int c = 40;
    int cc = 'g';
    int ccc = 'R';

    printf("Mon tolower :\n");
    printf("%i\n", ft_tolower(c));
    printf("%i\n", ft_tolower(cc));
    printf("%i\n", ft_tolower(ccc));
    printf("%c\n", ft_tolower(c));
    printf("%c\n", ft_tolower(cc));
    printf("%c\n", ft_tolower(ccc));

    printf("\nOG :\n");
    printf("%i\n", tolower(c));
    printf("%i\n", tolower(cc));
    printf("%i\n", tolower(ccc));
    printf("%c\n", tolower(c));
    printf("%c\n", tolower(cc));
    printf("%c\n", tolower(ccc));

}