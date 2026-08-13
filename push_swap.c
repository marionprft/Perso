/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapointi <mapointi@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/16 14:58:41 by mapointi          #+#    #+#             */
/*   Updated: 2026/08/12 23:26:13 by mapointi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// au propre
// void	ft_which_flag(argv) if ft_strcmp (argv[1], "--bench") *mode = 4;

#include "push_swap.h"


int	ft_veriflag(char **argv)
{
	if (is_bench(*argv) == 1 || is_adaptive(*argv) == 1 
	|| is_simple(*argv) == 1
	|| is_medium(*argv) == 1 || is_complex(*argv) == 1)
		return (1);
	else
		return (0);
}

int	ft_verifnum(int argc, char **argv)
{
	int	i;
	int	j;

	i = 1;
	while (i < argc)
	{
		while (ft_veriflag(&argv[i]) == 1)
			i++;
		j = 0;
		while (argv[i][j] == ' ')
			j++;
		if (argv[i][j] == '-')
			j++;
		while (argv[i][j] != '\0')
		{
			if (ft_isdigit(argv[i], argv[i][j]) == 0)
				error_exit();
			j++;
		}
		i++;
	}
	return (0);
}

int	av_too_long(char *str_argv)
{
	int	i;

	i = 0;
	while (str_argv[i])
		i++;
	i -= 1;
	if (i >= 14)
		return (1);
	return (0);
}

// if (i >= 14) //où sort_medium est a

t_list	*ft_createlist(int argc, char **argv)
{
	t_list	*stack_a;
	t_list	*newnode;
	int		i;

	i = 1;
	stack_a = 0;
	newnode = 0;
	if (argc < 2)
		error_exit();
	while (i < argc)
	{
		while(ft_veriflag(&argv[i]) == 1)
			i++;
		if (av_too_long(argv[i]))
			error_exit();
		newnode = ft_lstnew(ft_atoi(argv[i]));
		if ((newnode->value > INT_MAX || newnode->value < INT_MIN)
			|| (ft_cmp(argc, argv) == 1))
			error_exit();
		ft_lstadd_back(&stack_a, newnode);
		i++;
	}
	return (stack_a);
}

float	disorder(t_list *lst)
{
	float	mistakes;
	float	total_pairs;
	float	disorder;

	mistakes = 0;
	total_pairs = 0;
	while (lst->next != NULL)
	{
		if (lst->value > lst->next->value)
			mistakes++;
		total_pairs++;
		lst = lst->next;
	}
	disorder = mistakes / total_pairs;
	return (disorder);
}

void	*error_exit(void)
{
	write(2, "Error\n", 6);
	exit (1);
}
