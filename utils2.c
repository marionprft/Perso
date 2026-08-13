/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils2.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapointi <mapointi@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/15 14:32:04 by inhoufan          #+#    #+#             */
/*   Updated: 2026/08/12 23:35:05 by mapointi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_list	*select_smallest(t_list **lst, long seuil)
{
	t_list	*current;
	t_list	*smallest;

	current = *lst;
	smallest = NULL;
	while (current != NULL)
	{
		if (current->value > seuil && (!smallest
				|| current->value < smallest->value))
			smallest = current;
		current = current->next;
	}
	return (smallest);
}

int	find_rang_max(t_list *lst)
{
	int	rang_max;

	if (!lst)
		rang_max = -1;
	rang_max = lst->rang;
	while (lst != NULL)
	{
		if (lst->rang > rang_max)
			rang_max = lst->rang;
		lst = lst->next;
	}
	return (rang_max);
}

// long	select_biggest(t_list **lst)
// {
// 	t_list	*current;
// 	t_list	*tmp;

// 	current = *lst;
// 	tmp = *lst;
// 	while (current->next != NULL)
// 	{
// 		if (current->value > tmp->value)
// 			tmp = current;
// 		current = current->next;
// 	}
// 	return (tmp->value);
// }

int	position_rang_cible(t_list *lst, int rang_cible)
{
	int	pos;

	pos = 0; // 0 est le sommet de la stack
	while (lst != NULL)
	{
		if (lst->rang == rang_cible)
			return (pos);
		pos++;
		lst = lst->next;
	}
	return (pos);
}

int	ft_cmp(int argc, char **argv) // savoir si on a des doublons
{
	int i;
	int j;

	i = 1;
	while (i < argc)
	{
		while (ft_veriflag(&argv[i]) == 1)
			i++;
		j = i + 1;
		while (j < argc)
		{
			while (ft_veriflag(&argv[j]) == 1)
				j++;
			if (ft_atoi(argv[i]) == ft_atoi(argv[j]))
				return (1);
			else
				j++;
		}
		i++;
	}
	return (0);
}

int	ft_racine(int n) // la on calcul la racine de n
{
	int a;

	a = 1;
	while ((a * a) <= n)
	{
		a++;
	}
	return (a - 1);
}

// int	ft_pince(t_list **lst, long rang) // fct 50/50
// {
// 	t_list *node;
// 	int lst_midsize;
// 	int i;

// 	node = *lst;
// 	lst_midsize = ft_lstsize(*lst) / 2;
// 	i = 0;
// 	while (i <= lst_midsize)
// 	{
// 		node = node->next;
// 		i++;
// 	}
// 	node = *lst;
// 	return (i - 1);
// }

// j = i;
// while (j <= ft_lstsize(*lst))
// {
// 	node = node->next;
// 	j++;
// }