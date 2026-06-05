/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapointi <mapointi@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/03 18:58:06 by mapointi          #+#    #+#             */
/*   Updated: 2026/06/05 17:52:24 by mapointi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// static datatype nom_var = valeur d'initialisation;

#include <fcntl.h>
#include <limits.h>
#include <stdio.h>
#include <string.h>
#include <unistd.h>

int	main(void) // char *get_next_line(int fd)
{
	int fd;
	char *test; 
	size_t len;

	fd = open("text.txt", O_WRONLY, 777); // | O_TRUNC | O_CREAT, 0640);
	if (fd == -1)
		return (1);
	test = "Hello\n";
		// Bonjour Monde!\n Il a pas dit bonjour.\n;
	len = strlen(test);
	printf("Len test = %ld\n", len);
	// read()
	printf("fd = %d\n", fd);
	write(fd, test, len);
	close(fd);
	return (0);
}