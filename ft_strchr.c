/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapointi <mapointi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/26 23:04:04 by mapointi          #+#    #+#             */
/*   Updated: 2026/04/26 23:26:57 by mapointi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char    *ft_strchr(const char *s, int c)
{
    int i;
    char    *str;

    i = 0;
    while (s[i])
    {
        if (s[i] = c)
        {
            str = s;
            return (str);
        else
            i++;
    } 

}
int main(void)
{
    int c = 78;
    char s[] = "nsopgivnw[peg;sbWEFB]"
    int i = 0;

    char *str = ft_strchr(s, c);
    printf("Mon strchr :\n");
    while (i <= ft_strlen(s))
    {
        printf("%s\n", str);
    }
    
}
