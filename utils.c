/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapointi <mapointi@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/09 15:48:09 by mapointi          #+#    #+#             */
/*   Updated: 2026/06/10 20:25:16 by mapointi         ###   ########.fr       */
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

	if (!str)
		return (0);
	i = 0;
	while (str[i] != 0)
	{
		i++;
		printf("%c\n", str[i]);
	}
	return (i);
}

int	is_return_line(char *str)
{
	int	i;

	if (!str)
		return (0);
	i = 0;
	while (str[i])
	{
		if (str[i] == '\n')
			return (1);
		i++;
	}
	return (0);
}

char	*strbuilding(char *str, char *buf)
{
	int		i;
	int		j;
	char	*strr;

	strr = 0;
	i = 0;
	if (!str)
	{
		str = malloc(sizeof(char) * 1);
		if (!str)
			return (NULL);
		str[0] = 0;
	}
	strr = malloc(sizeof(char) * (ft_strlen(str) + ft_strlen(buf) + 1));
	if (!strr)
		return (NULL);
	while (str[i])
	{
		strr[i] = str[i];
		i++;
	}
	free(str);
	j = 0;
	while (buf[j])
	{
		strr[i] = buf[j];
		i++;
		j++;
	}
	strr[i] = 0;
	return (strr);
}

char	*ft_strchr(const char *s, int c)
{
	int	i;

	i = 0;
	while (s[i])
	{
		if (s[i] == (unsigned char)c)
			return ((char *)&(s[i]));
		i++;
	}
	if (c == '\0')
		return ((char *)s + i);
	return (NULL);
}

char	*ft_substr(char *s, int start, size_t len)
{
	char			*sub;
	unsigned int	i;

	i = 0;
	sub = (char *)malloc(sizeof(char) * (len + 1));
	if (!sub)
		return (NULL);
	while (len-- && s[start])
	{
		if (start > ft_strlen(s))
			break ;
		sub[i] = s[start];
		start++;
		i++;
	}
	sub[i] = 0;
	return (sub);
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