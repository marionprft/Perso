/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   adaptive_algo.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapointi <mapointi@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/18 17:11:06 by mapointi          #+#    #+#             */
/*   Updated: 2026/08/12 23:23:47 by mapointi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	adapt_sort(t_list **lsta, t_list **lstb, t_count *op)
{
	float dis;

	dis = disorder(*lsta);
	if (dis < 0.2)
	{
		bubble_sort(lsta, op);
		write(1, "bbl", 3);
	}
	else if (dis >= 0.2 && dis < 0.5)
	{
		algo_medium(lsta, lstb, op);
		write(1, "med", 3);
	}
	else if (dis >= 0.5)
	{
		ft_radix(lsta, lstb, op);
		write(1, "rdx", 3);
	}
}


		// ft_pushchunk(lsta, lstb, op);