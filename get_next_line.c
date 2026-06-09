/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapointi <mapointi@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/03 18:58:06 by mapointi          #+#    #+#             */
/*   Updated: 2026/06/09 20:17:56 by mapointi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// static datatype nom_var = valeur d'initialisation;

// lire chaque buffer cree et reallocque jusqu'a trouver un \name

// lire n bytes et les ecrire dans un buffer deja initialise d'au
// moins n bytes. retourne le nombre m <= n lus.

#include "get_next_line.h"

int	is_retour_ligne(char *str)
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

char	*get_next_line(int fd)
{
	char buf[BUFFER_SIZE + 1];
	int			n;
	//int			i;
	//static char	*temp;
	char		*str;

	str = 0;
	//i = 0;
	while (is_retour_ligne(str) == 0)
	{
		n = read(fd, buf, BUFFER_SIZE);
		buf[n] = 0;
		str = strbuilding(str, buf);
		// if (is_retour_ligne == 1)
		// 	temp = ft_strdup(buf[i + 1]);
	}
	return (str);
}
int		main(void)
{
	char *gnl;

	int fd = open("text.txt", O_WRONLY | O_CREAT, 777);
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
