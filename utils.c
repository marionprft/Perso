/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapointi <mapointi@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/16 15:00:29 by mapointi          #+#    #+#             */
/*   Updated: 2026/08/08 22:11:46 by mapointi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_isdigit(char *str, int c)
{
	if ((c >= '0' && c <= '9') || ft_veriflag(&str) == 1)
		return (1);
	else
		return (0);
}

t_list	*ft_lstnew(long value)
{
	t_list	*newnode;

	newnode = malloc(sizeof(t_list));
	if (!newnode)
		return (NULL);
	newnode->value = value;
	newnode->next = NULL;
	newnode->rang = 0;	
	return (newnode);
}

long	ft_lstsize(t_list *lst) // on prend en parametre le premier node
							// de la liste chainee a parcourir.
{
	long i;

	i = 0;
	if (lst == NULL)
		return (0);
	while (lst != 0)
	{
		lst = lst->next;
		i++;
	}
	return (i);
}

long	ft_atoi(const char *nptr)
{
	int		i;
	long	res;
	int		sign;

	i = 0;
	res = 0;
	sign = 1;
	while ((nptr[i] > 8 && nptr[i] < 14) || nptr[i] == ' ')
		i++;
	if (nptr[i] == '-' || nptr[i] == '+')
	{
		if (nptr[i] == '-')
			sign = -1;
		i++;
	}
	while (nptr[i] != '\0' && nptr[i] >= '0' && nptr[i] <= '9')
	{
		res = res * 10 + (nptr[i] - '0');
		i++;
	}
	return (res * sign);
}

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*p;

	if (!lst || !new)
		return ;
	if (*lst == NULL)
	{
		*lst = new;
		return ;
	}
	p = *lst;
	while (p->next != NULL)
	{
		p = p->next;
	}
	p->next = new;
}

