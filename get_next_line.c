/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapointi <mapointi@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/03 18:58:06 by mapointi          #+#    #+#             */
/*   Updated: 2026/06/10 20:37:16 by mapointi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*read_line(int fd, char *stash)
{
	int	n;
	char *buf;

	buf = malloc(sizeof(char) * (BUFFER_SIZE + 1));
	if (!buf)
		return (NULL);
	n = 1;
	while (n > 0 && is_return_line(stash) == 0)
	{
		n = read(fd, buf, BUFFER_SIZE);
		if (n == -1)
		{
			free(buf);
			free(stash);
			return (NULL);
		}
		else if (n == 0)
			break ;
		buf[n] = 0;
		stash = strbuilding(stash, buf);
		if (!stash)
			return (NULL);
	}
	return (stash);
	printf("returned stash = %s\n", stash);
}

char	*get_next_line(int fd)
{
	static char	*stash;
	char *previous_stash;
	int len;

	if (fd < 0 || BUFFER_SIZE <= 0)
		return (NULL);
	previous_stash = read_line(fd, stash);
	//printf("prev stash = %s\n", previous_stash);
	len = ft_strlen(previous_stash);
	//printf("len prev stash = %d\n", len);
	stash = ft_strchr(stash, stash[len + 1]);
	//printf("new stash = %s\n", stash);

	return (previous_stash);
}

int	main(void)
{
	char	*gnl;
	int		fd;

	fd = open("text.txt", O_WRONLY | O_CREAT, 777);
	if (fd < 0)
		return (1);
	gnl = get_next_line(fd);
	printf("%s\n", gnl);
	close(fd);
}

// int main(void) // char *get_next_line(int fd)
// {
// 	int fd;
// 	char *test;
// 	size_t len;

// 	test = "Hello\n";
// 	len = strlen(test);
// 	printf("Len test = %ld\n", len);
// 	// read()
// 	printf("fd = %d\n", fd);
// 	write(fd, test, len);
// 	close(fd);
// 	return (0);
// }
