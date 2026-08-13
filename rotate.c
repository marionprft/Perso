/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapointi <mapointi@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/29 17:09:34 by inhoufan          #+#    #+#             */
/*   Updated: 2026/08/12 23:43:36 by mapointi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_rotate(t_list **lst) // premier devient dernier
{
	t_list	*node1;
	t_list	*i;

	if (!*lst)
		return ;
	i = *lst;
	node1 = *lst;
	while (i->next != NULL)
	{
		i = i->next;
	}
	*lst = node1->next;
	i->next = node1;
	node1->next = NULL;
	return ;
}

void	ra(t_list **stack_a, t_count *op)
{
	ft_rotate(stack_a);
	write(1, "ra\n", 3);
	op->ra++;
}

void	rb(t_list **stack_b, t_count *op)
{
	ft_rotate(stack_b);
	write(1, "rb\n", 3);
	op->rb++;

}


void	rr(t_list **stack_a, t_list **stack_b, t_count *op)
{
	ft_rotate(stack_a);
	ft_rotate(stack_b);
	write(1, "rr\n", 3);
	op->rr++;

}


