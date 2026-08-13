/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swapi.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapointi <mapointi@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/29 17:00:33 by inhoufan          #+#    #+#             */
/*   Updated: 2026/08/10 16:54:11 by mapointi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_swapi(t_list **lst) // swap du n1 et n2
{
	t_list *node1;
	t_list *node2;
	t_list *tmp;

	if (!*lst)
		return ;
	node1 = *lst;
	node2 = node1->next;
	*lst = node2;
	tmp = node2->next;
	node2->next = node1;
	node1->next = tmp;
	return ;
}

void	sa(t_list **stack_a, t_count *op) // 2 premier qui change de place
{
	ft_swapi(stack_a);
	write(1, "sa\n", 3);
	op->sa++;
}



void	sb(t_list **stack_b, t_count *op)
{
	ft_swapi(stack_b);
	write(1, "sb\n", 3);
	op->sb++;
}


void	ss(t_list **stack_a, t_list **stack_b, t_count *op) // dans b et a ici
{
	ft_swapi(stack_a);
	ft_swapi(stack_b);
	write(1, "ss\n", 3);
	op->ss++;
}
