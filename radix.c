/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   radix.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inhoufan <inhoufan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/18 20:15:56 by mapointi          #+#    #+#             */
/*   Updated: 2026/08/10 16:23:05 by inhoufan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_bitsize(long rang)
{
	int	rappel;

	rappel = 0;
	if (rang > 1)
		rappel = ft_bitsize(rang / 2);
	return (1 + rappel);
}
// int count = 0;
	// long n = rang;
	// while (n > 0)
	// {
	// 	n >>= 1;
	// 	count++;
	// }
	// return count;

void	check_bit(t_list **lsta, t_list **lstb, t_count *op, int shift)
{
	int	shifted_bit;

	shifted_bit = ((*lsta)->rang >> shift) & 1;
	if (shifted_bit == 0)
		pb(lsta, lstb, op);
	else
		ra(lsta, op);
}
// tu commence au dernier bit dans A et ensuite dans B current bit  -1 
// check le dernier bit de lsta A et push vers B
// check l'avant dernier de B et push vers A
// tjr check l'avant avant dernier etc 
// ici on check le dernier c tout

void	check_bit_deux(t_list **lsta, t_list **lstb, t_count *op)
{
	pa(lsta, lstb, op);
}

//tout pareil mais pour push vers a
// ici tu appel avec shift+1 pcq tu check lavant dernier
// dans b on check 1 de + 
// int	shifted_bit; int shift dans proto de base

// // // shifted_bit = ((*lstb)->rang >> shift) & 1;
// // if (shifted_bit == 1)
// pa(lsta, lstb, op);
// // else
// // 	rb(lsta, op);


void	ft_radix(t_list **lsta, t_list **lstb, t_count *op)
{
	int		shift;
	long	sizeoflist;
	int		i;
	long	size;

	shift = 0;
	ft_rang(lsta);
	sizeoflist = ft_lstsize(*lsta);
	while (shift < ft_bitsize(sizeoflist))
	{
		size = ft_lstsize(*lsta);
		i = 0;
		while (i < size)
		{
			check_bit(lsta, lstb, op, shift);
			i++;
		}
		size = ft_lstsize(*lstb);
		i = 0;
		while (i < size)
		{
			check_bit_deux(lsta, lstb, op);
			i++;
		}
		shift++;
	}
}

// on push une fois dans b ici
	// tant que tu es pas at the end de bitsize
	// tu fait les check
// int	main(int argc, char **argv)
// {
// 	t_list	*a;
// 	t_list	*b;
// 	t_count op;
// 	int 	i;

// 	ft_verifnum(argc, argv);
// 	a = ft_createlist(argc, argv);
// 	b = NULL;
// 	initialize_op(&op);

// 	ft_rang(&a);
// 	ft_radix(&a, &b, &op);
// 	display_op(&op);

// 	printf(">>>> STACK B\n");
// 	i = 0;
// 	while (b != NULL)
// 	{
// 		printf("NODE %d\nvalue = %ld\n", i + 1, b->value);
// 		printf("adresse de nextnode : %p\n", b->next);
// 		printf("rang i : %ld\n\n", b->rang);
// 		b = b->next;
// 		i++;
// 	}
// 	printf(">>>> STACK A\n");
// 	i = 0;
// 	while (a != NULL)
// 	{
// 		printf("NODE %d\nvalue = %ld\n", i + 1, a->value);
// 		printf("adresse de nextnode : %p\n", a->next);
// 		printf("rang i : %ld\n\n", a->rang);
// 		a = a->next;
// 		i++;
// 	}
// }
