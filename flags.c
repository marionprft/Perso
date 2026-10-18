<<<<<<< HEAD
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   flags.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapointi <mapointi@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/06 14:48:55 by mapointi          #+#    #+#             */
/*   Updated: 2026/08/12 23:25:51 by mapointi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <stdio.h> 

int is_bench(char *str)
{
	if (str[0] == '-' && str[1] == '-' && str[2] == 'b' && str[3] == 'e'
		&& str[4] == 'n' && str[5] == 'c'
		&& str[6] == 'h' && str[7] == '\0')
		return (1);
	else
		return (0);
}
int is_adaptive (char *str)
{
	if (str[0] == '-' && str[1] == '-' && str[2] == 'a'
		&& str[3] == 'd' && str[4] == 'a' && str[5] == 'p'
		&& str[6] == 't' && str[7] == 'i' && str[8] == 'v' 
		&& str[9] == 'e' && str[10] == '\0')
		return (1);
	else
		return (0);
}
int is_simple (char *str)
{
	if (str[0] == '-' && str[1] == '-' && str[2] == 's'
		&& str[3] == 'i' && str[4] == 'm' && str[5] == 'p'
		&& str[6] == 'l' && str[7] == 'e' && str[8] == '\0')
		return (1);
	else
		return (0);
}

int is_medium(char *str)
{
	if (str[0] == '-' && str[1] == '-' && str[2] == 'm' && str[3] == 'e'
		&& str[4] == 'd' && str[5] == 'i'
		&& str[6] == 'u' && str[7] == 'm' && str[8] == '\0')
		return (1);
	else
		return (0);
}
int is_complex (char *str)
{
	if (str[0] == '-' && str[1] == '-' && str[2] == 'c' && str[3] == 'o'
		&& str[4] == 'm' && str[5] == 'p'
		&& str[6] == 'l' && str[7] == 'e' && str[8] == 'x' && str[9] == '\0')
		return (1);
	else
		return (0);
}

void	ft_flags(char **argv, t_list **lsta, t_list **lstb, t_count *op)
{
	if (is_simple(argv[1]) == 1 || is_simple(argv[2]) == 1)
		bubble_sort(lsta, op);
	else if (is_adaptive(argv[1]) == 1 || is_adaptive(argv[2]) == 1)
		adapt_sort(lsta, lstb, op);
	else if (is_medium(argv[1]) == 1 || is_medium(argv[2]) == 1)
		algo_medium(lsta, lstb, op);
	else if (is_complex(argv[1]) == 1 || is_complex(argv[2]) == 1)
		ft_radix(lsta, lstb, op);
	else
		adapt_sort(lsta, lstb, op);
}

// else if (is_bench(argv[1]) == 1 || is_bench(argv[2]) == 2)
// 	bench(lsta, lstb, op);
// argv[1][i] == --simple
// write(1, "bbl\n", 4);
// write(1, "adp\n", 4);
// write(1, "med\n", 4);
// write(1, "cpx\n", 4);
// write(1, "adpwalou\n", 9);





// int	main(int argc, char **argv)
// {
// 	t_list	*a;
// 	t_list	*b;
// 	t_count op;
// 	int 	i;

// 	ft_verifnum(argc, argv);
// 	a = ft_createlist(argc, argv);
// 	b = NULL;
// 	initialize_op(&op);

// 	ft_flags(argv, &a, &b, &op);

// 	printf(">>>> STACK B\n");
// 	i = 0;
// 	while (b != NULL)
// 	{
// 		printf("NODE %d\nvalue = %ld\n", i + 1, b->value);
// 		printf("adresse de nextnode : %p\n", b->next);
// 		printf("rang i : %ld\n\n", b->rang);
// 		b = b->next;
// 		i++;
// 	}
// 	printf(">>>> STACK A\n");
// 	i = 0;
// 	while (a != NULL)
// 	{
// 		printf("NODE %d\nvalue = %ld\n", i + 1, a->value);
// 		printf("adresse de nextnode : %p\n", a->next);
// 		printf("rang i : %ld\n\n", a->rang);
// 		a = a->next;
// 		i++;
// 	}
// }


// --------- TEST RECONNAISSANCE FLAGS - OK ----------
// int main ()
// {
// 	char a[] = "--bench";
// 	char b[] = "--adaptive";
// 	char c[] = "--simple";
// 	char d[] = "--medium";
// 	char e[] = "--complex";
// 	char f[] = "--mediu";

// 	int aa = is_bench(a);
// 	int bb = is_adaptive(b);
// 	int cc = is_simple(c);
// 	int dd = is_medium(d);
// 	int ee = is_complex(e);
// 	int ff = is_medium(f);

// 	printf("%d, %d, %d, %d, %d, f = %d\n", aa, bb, cc, dd, ee, ff);
// }
=======


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
>>>>>>> de26f2275846daea362787021363c947bf126711
