/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operations.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapointi <mapointi@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/29 18:09:41 by inhoufan          #+#    #+#             */
/*   Updated: 2026/08/12 23:42:33 by mapointi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	initialize_op(t_count *op)
{
	op->sa = 0;
	op->sb = 0;
	op->ss = 0;
	op->pa = 0;
	op->pb = 0;
	op->ra = 0;
	op->rb = 0;
	op->rr = 0;
	op->rra = 0;
	op->rrb = 0;
	op->rrr = 0;
	op->total = 0;
	
}
//total = op->sa->rrr;	op->total = 

void	display_op(t_count *op)
{
	printf("pa: %d\n", op->pa);
	printf("pb: %d\n", op->pb);
	printf("sa: %d\n", op->sa);
	printf("sb: %d\n", op->sb);
	printf("ss: %d\n", op->ss);
	printf("ra: %d\n", op->ra);
	printf("rb: %d\n", op->rb);
	printf("rr: %d\n", op->rr);
	printf("rra: %d\n", op->rra);
	printf("rrb: %d\n", op->rrb);
	printf("rrr: %d\n", op->rrr);
	printf("total: %d\n", op->total);

}

