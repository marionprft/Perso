/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapointi <mapointi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/27 19:38:18 by mapointi          #+#    #+#             */
/*   Updated: 2026/04/27 20:24:46 by mapointi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char    *ft_strrchr(const char *s, int c)
{
    int i;

    i = ft_strlen(s) - 1;
    while (i >= 0)
    {
        if (s[i] == c)
        {
            return ((char *)(&s[i]));
        }
        i--;
    }
        return (NULL);
}

int main(void)
{
    char *s = "coucou les musulmans, moi je mange la GLAAACEuh";
    int c = 's';

    printf("Mon strrchr :\n");
    printf("%s\n", ft_strrchr(s, c));

    printf("\nOG :\n");
    printf("%s\n", strrchr(s, c));
}