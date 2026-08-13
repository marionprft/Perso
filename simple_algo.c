/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   simple_algo.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inhoufan <inhoufan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/27 15:20:33 by mapointi          #+#    #+#             */
/*   Updated: 2026/08/10 16:22:06 by inhoufan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

// idee:re	1. comparer les deux premieres values
//			2. si lst->value < lst->next->value alors ROTATE
//			3. sinon SWAP puis ROTATE

void	bubble_sort(t_list **lst, t_count *op)
{
	t_list	*first_node;
	t_list	*second_node;
	int		i;
	int		len;

	i = 0;
	len = ft_lstsize(*lst);
	first_node = *lst;
	second_node = first_node->next;
	while (disorder(*lst) != 0)
	{
		while (i < len)
		{
			if (i < len - 1 && first_node->value > second_node->value)
				sa(lst, op);
			ra(lst, op);
			i++;
			first_node = *lst;
			second_node = first_node->next;
		}
		i = 0;
	}
	op->total = op->sa + op->ra;
}

// nvl fonction pr orga

void	insert_swap_sort(t_list **lsta, t_list **lstb, t_count *op)
{
	t_list	*node1;

	node1 = *lsta;
	if (node1->rang == node1->next->rang + 1)
		sa(lsta, op);
	else if (node1->rang < node1->next->rang)
		ra(lsta, op);
	else
	{
		pb(lsta, lstb, op);
		while ((*lstb)->rang != (*lsta)->rang + 1)
			ra(lsta, op);
		pa(lsta, lstb, op);
	}
}

// on part de 10 rangs quon doit trier
// on regarde la tete de liste de a
// on compare avec le rang qui suit
// condition 1 : si deux rangs cons on swap
// condition 2 : si le rang 1 est + petit c ok
// sinon on rotate
// condition 3 : else on push dans b et on rotate a juska trouver sa place
// des que c ok on repush dans a
// et tout ca on le fait tant que disorder de lsta est != 0