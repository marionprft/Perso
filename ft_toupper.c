/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapointi <mapointi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/26 21:25:45 by mapointi          #+#    #+#             */
/*   Updated: 2026/04/26 22:56:05 by mapointi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "libft.h"

int ft_toupper(int c)
{
    if (c >= 'a' && c <= 'z')
    {
        c = c - 32;
    }
    
    return (c);
}

#include <stdio.h>

int main(void)
{
    int c = 40;
    int cc = 'g';
    int ccc = 'R';

    printf("Mon toupper :\n");
    printf("%i\n", ft_toupper(c));
    printf("%i\n", ft_toupper(cc));
    printf("%i\n", ft_toupper(ccc));
    printf("%c\n", ft_toupper(c));
    printf("%c\n", ft_toupper(cc));
    printf("%c\n", ft_toupper(ccc));

    printf("\nOG :\n");
    printf("%i\n", toupper(c));
    printf("%i\n", toupper(cc));
    printf("%i\n", toupper(ccc));
    printf("%c\n", toupper(c));
    printf("%c\n", toupper(cc));
    printf("%c\n", toupper(ccc));

}