/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
<<<<<<< HEAD
=======
<<<<<<<< HEAD:adaptive_algo.c
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

========
>>>>>>> de26f2275846daea362787021363c947bf126711
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapointi <mapointi@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/16 15:19:17 by mapointi          #+#    #+#             */
<<<<<<< HEAD
/*   Updated: 2026/08/12 23:26:49 by mapointi         ###   ########.fr       */
=======
/*   Updated: 2026/06/17 20:39:11 by mapointi         ###   ########.fr       */
>>>>>>> de26f2275846daea362787021363c947bf126711
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

<<<<<<< HEAD
# include <limits.h>
# include <stddef.h>
=======
# include "libft.h"
>>>>>>> de26f2275846daea362787021363c947bf126711
# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>

<<<<<<< HEAD
typedef struct s_list
{
	long			value;
	struct s_list	*next;
	long			rang;
}					t_list;

typedef struct s_count
{
	int				sa;
	int				sb;
	int				ss;
	int				pa;
	int				pb;
	int				ra;
	int				rb;
	int				rr;
	int				rra;
	int				rrb;
	int				rrr;
	int				total;
}					t_count;

void				initialize_op(t_count *op);
void				display_op(t_count *op);

float				disorder(t_list *lst);

int					av_too_long(char *str_argv);
int					ft_cmp(int argc, char **argv);
int					ft_isdigit(char *str, int c);
long				ft_lstsize(t_list *lst);
int					ft_racine(int n);
int					ft_pince(t_list **lst);
int					ft_verifnum(int argc, char **argv);
int					ft_veriflag(char **argv);
int					is_number(int argc, char **argv);

int					ft_bitsize(long rang);

int					is_bench(char *str);
int					is_adaptive(char *str);
int					is_simple(char *str);
int					is_medium(char *str);
int					is_complex(char *str);
void				ft_flags(char **argv, t_list **lsta, t_list **lstb,
						t_count *op);

long				ft_atoi(const char *nptr);
t_list				*select_smallest(t_list **lst, long seuil);
long				select_biggest(t_list **lst);
int					find_rang_max(t_list *lst);
int					position_rang_cible(t_list *lst, int rang_cible);

t_list				*ft_createlist(int argc, char **argv);
t_list				*ft_lstnew(long value);

void				*error_exit(void);

void				bubble_sort(t_list **lst, t_count *op);
void				ft_list_sort(t_list **begin_list, int (*cmp)());
void				ft_lstadd_back(t_list **lst, t_list *new);
void				ft_lstiter(t_list *lst, void (*f)(void *));

void				ft_pushchunk(t_list **lsta, t_list **lstb, t_count *op);
void				ft_pushback_a(t_list **lsta, t_list **lstb, t_count *op);
void				sort_medium(t_list **lsta, t_list **lstb, t_count *op);
void				algo_medium(t_list **lsta, t_list **lstb, t_count *op);
void				insert_swap_sort(t_list **lsta, t_list **lstb, t_count *op);
void				ft_rang(t_list **lsta);

void				check_bit(t_list **lsta, t_list **lstb, t_count *op,
						int shift);
void				check_bit_deux(t_list **lsta, t_list **lstb, t_count *op);
void				ft_radix(t_list **lsta, t_list **lstb, t_count *op);

void				adapt_sort(t_list **lsta, t_list **lstb, t_count *op);

void				ft_pushi(t_list **lst1, t_list **lst2);
void				pa(t_list **stack_a, t_list **stack_b, t_count *op);
void				pb(t_list **stack_a, t_list **stack_b, t_count *op);

void				ft_swapi(t_list **lst);
void				sa(t_list **stack_a, t_count *op);
void				sb(t_list **stack_b, t_count *op);
void				ss(t_list **stack_a, t_list **stack_b, t_count *op);

void				ft_rotate(t_list **lst);
void				ra(t_list **stack_a, t_count *op);
void				rb(t_list **stack_b, t_count *op);
void				rr(t_list **stack_a, t_list **stack_b, t_count *op);

void				ft_rrotate(t_list **lst);
void				rra(t_list **stack_a, t_count *op);
void				rrb(t_list **stack_b, t_count *op);
void				rrr(t_list **stack_a, t_list **stack_b, t_count *op);

#endif
=======
// typedef struct s_stack
// {
// 	int				*data;
// 	struct s_stack	*next;
// }						t_stack;
>>>>>>>> de26f2275846daea362787021363c947bf126711:push_swap.h

		// ft_pushchunk(lsta, lstb, op);
>>>>>>> de26f2275846daea362787021363c947bf126711
