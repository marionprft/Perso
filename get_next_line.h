/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapointi <mapointi@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/03 18:51:12 by mapointi          #+#    #+#             */
/*   Updated: 2026/06/09 20:07:42 by mapointi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 3
# endif

# include <fcntl.h>
# include <limits.h>
# include <stdio.h>
# include <string.h>
# include <unistd.h>
# include <stdlib.h>

char	*get_next_line(int fd);
char	*strbuilding(char *str, char *buf);

#endif