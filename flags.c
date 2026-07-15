

#include <ctype.h>
#include <fcntl.h>
#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

int	ft_strcmp(const char *s1, const char *s2)
{
	size_t	i;

	i = 0;
	while (s2[i])
	{
		if (s1[i] == 0 && s2[i] != 0)
			return ((unsigned char)(s1[i]) - (unsigned char)(s2[i]));
		else if (s1[i] != s2[i])
			return ((unsigned char)(s1[i]) - (unsigned char)(s2[i]));
		i++;
	}
	return (0);
}

int	flags(int argc, char **argv)
{
	char	*s;
	char	*m;
	char	*c;
	char	*a;
	char	*b;

	s = "--simple";
	m = "--medium";
	c = "--complex";
	a = "--adaptative";
	b = "--bench";
	if (argc >= 2)
	{
		if (ft_strcmp(argv[1], b) == 0)
			// comment faire pour le cas argv2 = bench? sans segfault
			// 	// BENCH;
			return (1);
		if (ft_strcmp(argv[1], s) == 0)
			// bubble_sort(lst);
			return (2);
		if (ft_strcmp(argv[1], m) == 0)
			return (3);
		// algo_medium(lst);
		if (ft_strcmp(argv[1], c) == 0)
			return (4);
		// algo_complexe(lst);
		if (ft_strcmp(argv[1], a) == 0) // si 0 ou 5 alors algo adaptatif
			return (5);
		// algo_adaptatif(lst);
	}
	return (0);
}

int	main(int argc, char **argv)
{
	printf("%d\n", flags(argc, argv));
}