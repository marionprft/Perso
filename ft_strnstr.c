/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapointi <mapointi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/29 14:15:05 by mapointi          #+#    #+#             */
/*   Updated: 2026/05/03 23:06:30 by mapointi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// char    *ft_strnstr(const char *big, const char* little, size_t len)
// {
//     size_t  i;
//     size_t  j;

//     i = 0;
//     if (!big || !little)
//         return (NULL);
//     if((char)little[0] == 0)
//             return ((char *)big);
    
//     while(i < len && big[i])
//     {   
//         j = 0;
//         i++;
        
//         if (ft_strncmp(&big[i], little, ft_strlen(little)) == 0 && len - i >= ft_strlen(little))
//                 return ((char * ) big + i);
             
//     }     
//     return (NULL);
// }

char    *ft_strnstr(const char *big, const char* little, size_t len)
{
    size_t  i;
    size_t  j;

    i = 0;
    if(little == NULL)
        return (NULL);
    if(little[0] == 0)    
            return ((char *)big);
    while(i < len && big[i])
    {   
        j = 0;
        while(little[j] == big[i + j] && big[i + j] && (i + j) < len)
        {      
            j++;
        }  
        if (little[j] == 0)
            return ((char *)big + i);
        i++;   
    }
        
    return (NULL);
}

// int main() 
// {
//     char big[] = "j'ai faim d'un burger!!";
//     char la[] = "faim";
//     char pas_la[] = "moi aussi";
//     char pas_laa[] = "";
//     char *pas_laaa = 0;

    
//     printf("Mon strnstr :\n");
//     printf("%s\n",  ft_strnstr(big, la, 15));
//     printf("%s\n",  ft_strnstr(big, la, 7));
//     printf("%s\n",  ft_strnstr(big, pas_la, 5));
//     printf("%s\n",  ft_strnstr(big, pas_la, 18));
//     printf("%s\n",  ft_strnstr(big, pas_laa, 5));
//     printf("%s\n",  ft_strnstr(big, pas_laaa, 5));
    
//     printf("\nOG :\n");
//     printf("%s\n",  strnstr(big, la, 15));
//     printf("%s\n",  strnstr(big, la, 7));
//     printf("%s\n",  strnstr(big, pas_la, 5));
//     printf("%s\n",  strnstr(big, pas_la, 18));
//     printf("%s\n",  strnstr(big, pas_laa, 5));
//     printf("%s\n",  strnstr(big, pas_laaa, 5));
// }