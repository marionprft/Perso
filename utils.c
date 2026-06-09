/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapointi <mapointi@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/09 15:48:09 by mapointi          #+#    #+#             */
/*   Updated: 2026/06/09 20:12:38 by mapointi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

// char	*ft_save(fd, char *buf)
// {
// 	char		c;
// 	int			n;
// 	int			i;
// 	int			j;
// 	static char	*temp;

// 	i = 0;
// 	j = 0;
// 	n = read(fd, buf, BUFFER_SIZE);
// 	temp = malloc(sizeof(char) * n);
// 	c = '\n';
// 	while (buf[i])
// 	{
// 		if (buf[i] == '\n')
// 		{
// 			i++;
// 			temp[j] = buf[i];
// 			j++;
// 		}
// 		i++;
// 	}
// }

int	ft_strlen(char *str)
{
	int	i;

	if(!str)
		return (0);
	i = 0;
	while (str[i] != 0)
		i++;
	return (i);
}

char	*strbuilding(char *str, char *buf)
{
	int		i;
	int		j;
	char	*strr;

	i = 0;
	if (!str)
	{
		str = malloc(sizeof(char) * (ft_strlen(buf) + 1)); // recoder
		str[0] = 0;
	}
	strr = malloc(sizeof(char) * (ft_strlen(str) + ft_strlen(buf) + 1));
	while (str[i])
	{
		strr[i] = str[i];
		i++;
	}
	free(str);
	j = 0;
	while (buf[j])
		strr[i++] = buf[j++];
	strr[i] = 0;
	return (strr);
}
// char	*ft_end_of_file(char *buf)
// {
// 	int		n;
// 	char	*str;

// 	n = read(fd, buf, BUFFER_SIZE);
// 	if (n != ft_strlen(buf))
// 	{
// 		while (buf[i])
// 			str = malloc(sizeof(char) * (ft_strlen(buf) + 1));
// 		str[i] = 0;
// 	}
// 	return (str);
// }

// int	main(void)
// {
// 	char *str;

// 	str = 0;
// 	// str = malloc(sizeof(char) * 4);
// 	// str[0] = 's';
// 	// str[1] = 'a';
// 	// str[2] = 'l';
// 	// str[3] = '\0';

// 	str = strbuilding(str, "sal");
// 	printf("%s\n", str);
// 	str = strbuilding(str, "ute");
// 	printf("%s\n", str);
// }