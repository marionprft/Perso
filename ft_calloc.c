/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpf <mpf@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/29 17:49:54 by mapointi          #+#    #+#             */
/*   Updated: 2026/05/03 18:15:37 by mpf              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    *ft_calloc(size_t elmt, size_t size)
{
    void *mem;
   
    if(elmt != 0 && ((size * elmt) / elmt != size))
      return (NULL);
    mem = malloc(size * elmt);
    if (!mem)
        return (NULL);
    ft_bzero(mem, size * elmt);
    return (mem);
}

int main(void)
{   
    int tests[][2] = {{5, 1}, {3, 4}, {0, 1}, {5, 0}, {2147483647, 99999999}, {0, 0}};
    int i = 0;

    printf("Mon ft_calloc :\n");
    while (i < 6)
    {
        void *ptr = ft_calloc(tests[i][0], tests[i][1]);
        printf("%p\n", ptr);
        free(ptr);
        i++;
    }

    printf("\nOG :\n");
    i = 0;
    while (i < 6)
    {
        void *ptr = calloc(tests[i][0], tests[i][1]);
        printf("%p\n", ptr);
        free(ptr);
        i++;
    }

    /*printf("%p\n", (int *)ft_calloc(3, 4));
    printf("%p\n", (int *)ft_calloc(0, 1));
    printf("%p\n", (int *)ft_calloc(5, 0));
    printf("%p\n", (int *)ft_calloc(2147483648, 99999999));
    printf("%p\n", (int *)ft_calloc(0, 0));

    printf("\nOG :\n");
    printf("%p\n", calloc(5, 1));
    printf("%p\n", calloc(3, 4));
    printf("%p\n", calloc(0, 1));
    printf("%p\n", calloc(5, 0));
    printf("%p\n", calloc(2147483648, 4));
    printf("%p\n", calloc(0, 0));*/

}