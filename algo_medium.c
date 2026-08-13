/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algo_medium.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapointi <mapointi@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/14 12:11:13 by inhoufan          #+#    #+#             */
/*   Updated: 2026/08/12 23:40:13 by mapointi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_rang(t_list **lsta)
{
	long	rang;
	long	seuil;
	t_list	*min_node;

	rang = 1;
	min_node = *lsta;
	seuil = INT_MIN;
	while (rang <= ft_lstsize(*lsta))
	{
		min_node = select_smallest(lsta, seuil);
		min_node->rang = rang;
		seuil = min_node->value;
		rang++;
	}
	return ;
}

void	ft_pushchunk(t_list **lsta, t_list **lstb, t_count *op)
{
	int	lsta_size;
	int	chunk_size;
	int	chunk_limit;

	ft_rang(lsta);
	lsta_size = ft_lstsize(*lsta);
	chunk_size = ft_racine(lsta_size);
	if (chunk_size < 1)
		chunk_size = 1;
	chunk_limit = chunk_size;
	while (*lsta != NULL)
	{
		if ((*lsta)->rang <= chunk_limit)
		{
			pb(lsta, lstb, op);
			if (*lstb && (*lstb)->rang <= chunk_limit - (chunk_size / 2))
				rb(lstb, op);
			if (ft_lstsize(*lstb) == chunk_limit)
				chunk_limit = chunk_limit + chunk_size;
		}
		else
		{
			// Si aucun élément compatible n'est au sommet et qu'on a déjà rempli le chunk courant
			if (ft_lstsize(*lstb) >= chunk_limit)
				chunk_limit += chunk_size;
			else
				ra(lsta, op);
		}
	}
	return ;
}

// while (ft_lstsize(*lsta) / 3 != j) // rpz le nb de chunk
// while (i < lstsize) // creation d'un chunk ici
// j++; // on passe au chunk suivant

void	ft_pushback_a(t_list **lsta, t_list **lstb, t_count *op)
{
	int	rang_max;
	int	pos_rang_max;
	int	size_b;

	while (*lstb != NULL)
	{
		rang_max = find_rang_max(*lstb);
		pos_rang_max = position_rang_cible(*lstb, rang_max);
		size_b = ft_lstsize(*lstb);
		while ((*lstb)->rang != rang_max)
		{
			pos_rang_max = position_rang_cible(*lstb, rang_max);
			if (pos_rang_max <= size_b / 2)
				rb(lstb, op);
			else
				rrb(lstb, op);
		}
		pa(lsta, lstb, op);
	}
}

void	algo_medium(t_list **lsta, t_list **lstb, t_count *op)
{
	ft_pushchunk(lsta, lstb, op);  // Phase 1 : Pré-tri de A vers B par chunks
	ft_pushback_a(lsta, lstb, op); // Phase 2 : Tri parfait de B vers A
}

// void	sort_medium(t_list **lsta, t_list **lstb, t_count *op)
// {
// 	int	i;
// 	int	len;

// 	ft_pushchunk(lsta, lstb, op);
// 	len = ft_lstsize(*lstb);
// 	while (*lstb != NULL)
// 	{
// 		i = 0;
// 		while (i < len)
// 		{
// 			pa(lsta, lstb, op);
// 			i++;
// 		}
// 		while (disorder(*lsta) != 0)
// 		{
// 			ft_radix(lsta, lstb, op);
// 		}
// 	}
// }

// On a tt dans la stack b
// ok on prend le premier chunk de la stack b
// ok on le met dans la stack a
// ok on regarde son desordre
// ok on le trie
// ok ++;
// ft_radix(lsta, lstb, op); //ICI RADIX AU LIEU DE BUBBLE