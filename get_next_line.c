/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapointi <mapointi@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/03 18:58:06 by mapointi          #+#    #+#             */
/*   Updated: 2026/06/08 18:10:19 by mapointi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// static datatype nom_var = valeur d'initialisation;

#include <fcntl.h>
#include <limits.h>
#include <stdio.h>
#include <string.h>
#include <unistd.h>



// lire chaque buffer cree et reallocque jusqu'a trouver un \name

// lire n bytes et les ecrire dans un buffer deja initialise d'au
// moins n bytes. retourne le nombre m <= n lus.

int	is_retour_ligne(int str, char c)
{
	int	i;

	i = 0;
	while (str[i] != '\n')
	{
		i++;
		if (c == '\n')
			break ;
	}
	return (1);
}

char	*ft_buffer(int BUFFER_SIZE)
{
	buf = malloc(sizeof(char *) * BUFFER_SIZE);
	if (!buf)
		return (NULL);
	return (buf);
	free(buf);
}

char 	*strbuilding(char *str, char *buf)
{
	int i;
	cahr

	i = 0;
	if (str == 0)
		str = buf //pointeur = pointeur? syntaxe
}

char	*get_next_line(int fd)
{
	char	*buf;
	int	n;
	int		retour;
	
	buf = ft_buffer(int BUFFER_SIZE);

	while (buf[i] != '\n')
	{
		n = read(fd, buf, BUFFER_SIZE);
		i++;
	}
	if (buf[i] == '\n')
	{
		residu = buf
		write(1, "\n", 1)
	
}

int		main(void);
{
	char *str = "Hello world of hoomans";
	size_t len = strlen(str);
	int fd = open("text.txt", O_WRONLY | O_TRUNC | O_CREAT, 777);
	if (fd == -1)
		return (0);
	write(fd, str, len);
	get_next_line(int fd);
	close(fd);
}

#ifndef BUFFER_SIZE
# define BUFFER_SIZE

BUFFER_SIZE = 8;

#endif

int	main(void) // char *get_next_line(int fd)
{
	int		fd;
	char	*test;
	size_t	len;

	test = "Hello\n";
	len = strlen(test);
	printf("Len test = %ld\n", len);
	// read()
	printf("fd = %d\n", fd);
	write(fd, test, len);
	close(fd);
	return (0);
}
