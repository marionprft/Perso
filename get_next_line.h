/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapointi <mapointi@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
<<<<<<< HEAD:ft_putchar_fd.c
/*   Created: 2026/05/09 17:40:16 by mapointi          #+#    #+#             */
/*   Updated: 2026/05/18 19:30:46 by mapointi         ###   ########.fr       */
=======
/*   Created: 2026/06/03 18:51:12 by mapointi          #+#    #+#             */
/*   Updated: 2026/06/05 13:08:15 by mapointi         ###   ########.fr       */
>>>>>>> bf57123 (GNL):get_next_line.h
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
#define GET_NEXT_LINE_H

<<<<<<< HEAD:ft_putchar_fd.c
void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}
/*
int	main(void)
{
	int		fd;
	char	c;

	fd = open("test.txt", O_RDWR | O_CREAT, 0600);
	c = 'h';
	ft_putchar_fd(c, fd);
	return (0);
}
*/
=======

char *get_next_line(int fd);

#endif
>>>>>>> bf57123 (GNL):get_next_line.h
