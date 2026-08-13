/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rrotate.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapointi <mapointi@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/21 19:56:26 by mapointi          #+#    #+#             */
/*   Updated: 2026/08/10 16:53:33 by mapointi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_rrotate(t_list **lst) // dernier devient premier
{
	t_list *i;
	t_list *node1;

	if (!*lst)
		return ;
	i = *lst;
	node1 = *lst;
	while (i->next->next != NULL)
	{
		i = i->next;
	}
	i->next->next = node1;
	*lst = i->next;
	i->next = NULL;
	return ;
}
// t_list	*node1;
// node1 = *lst;
	// *lst = i->next;
	// c'est ici que le dernier devient premier
	// i->next = NULL;
	// lavant dernier fini par pointer vers NULL et devient dernier

void	rra(t_list **stack_a, t_count *op)
{
	ft_rrotate(stack_a);
	write(1, "rra\n", 4);
	op->rra++;
}


void	rrb(t_list **stack_b, t_count *op)
{
	ft_rrotate(stack_b);
	write(1, "rrb\n", 4);
	op->rrb++;
}


void	rrr(t_list **stack_a, t_list **stack_b, t_count *op)
{
	ft_rrotate(stack_a);
	ft_rrotate(stack_b);
	write(1, "rrr\n", 4);
	op->rrr++;
}
