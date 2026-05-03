/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapointi <mapointi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/03 18:30:34 by mapointi          #+#    #+#             */
/*   Updated: 2026/05/03 21:04:49 by mapointi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char    *ft_strdup(const char *s)
{
    size_t n;
    char *dup;

    n = ft_strlen(s);
    dup = (char *)malloc(sizeof(char) * n);
    if (!dup)
        return (NULL);
    ft_strlcpy(dup, s, n);
        return (dup);
    
}

int     main(void)
{
    char    s[] = "Hello world!";
    char *test = ft_strdup(s);
    
    printf("Mon strdup :\n");
    printf("%s\n", test);
    free(test);

    char    ss[] = "Hello world!";
    char *testt = ft_strdup(ss);
    
    printf("\nOG :\n");
    printf("%s\n", testt);
    free(testt);
}