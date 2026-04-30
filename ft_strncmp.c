/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapointi <mapointi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/27 20:25:33 by mapointi          #+#    #+#             */
/*   Updated: 2026/04/30 23:30:34 by mapointi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	while (s1[i] && i < n)
	{
		// if (s1[i] == s2[i])
		//    return (0);
		if (s1[i] != s2[i])
			return (unsigned char)(s1[i]) - (unsigned char)(s2[i]);
		i++;
	}
	if (i < n)
		return (unsigned char)(s1[i]) - (unsigned char)(s2[i]);
	return (0);
}

// int main(void)
// {
//     char *s1 = "period";
//     char *s2 = "period";
//     char *ss2 = "perfect";
//     size_t n = 5;

//     printf("Mon strncmp :\n");
//     printf("%d\n", ft_strncmp(s1, s2, n));
//     printf("%d\n", ft_strncmp(s1, ss2, n));

//     printf("\nOG :\n");
//     printf("%d\n", strncmp(s1, s2, n));
//     printf("%d\n", strncmp(s1, ss2, n));
// }