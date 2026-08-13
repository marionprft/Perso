/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pushi.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapointi <mapointi@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/29 17:05:24 by inhoufan          #+#    #+#             */
/*   Updated: 2026/08/10 16:50:48 by mapointi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_pushi(t_list **lst1, t_list **lst2) // P1 vers P2 ou inverse
{
	t_list	*node1_lst1;
	t_list	*node1_lst2;
	t_list	*lst_tmp;

	if (!*lst1)
		return ;
	node1_lst1 = *lst1;
	node1_lst2 = *lst2;
	lst_tmp = node1_lst1;
	*lst1 = node1_lst1->next;
	node1_lst1->next = node1_lst2;
	*lst2 = lst_tmp;
	return ;
}

void	pa(t_list **stack_a, t_list **stack_b, t_count *op) // pb vers pa
{

	ft_pushi(stack_b, stack_a);
	write(1, "pa\n", 3);
	op->pa += 1;
}



void	pb(t_list **stack_a, t_list **stack_b, t_count *op) // pa vers pb
{
	ft_pushi(stack_a, stack_b);
	write(1, "pb\n", 3);
	op->pb += 1;
}

