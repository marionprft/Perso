/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapointi <mapointi@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/15 13:03:17 by inhoufan          #+#    #+#             */
/*   Updated: 2026/08/12 23:41:08 by mapointi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

// ------MAIN PRINCIPAL FINAL AVEC PARSING------
int	main(int argc, char **argv)
{
	t_list	*a;
	t_list	*b;
	t_count	op;
	int		i;

	if (argc < 2)
		return (0);
	ft_verifnum(argc, argv);
	if (is_number(argc, argv) <= 1)
		return (0);
	a = ft_createlist(argc, argv);
	b = NULL;
	initialize_op(&op);
	ft_flags(argv, &a, &b, &op);
	printf(">>>> STACK B\n");
	i = 0;
	while (b != NULL)
	{
		printf("NODE %d\nvalue = %ld\n", i + 1, b->value);
		printf("adresse de nextnode : %p\n", b->next);
		printf("rang i : %ld\n\n", b->rang);
		b = b->next;
		i++;
	}
	printf(">>>> STACK A\n");
	i = 0;
	while (a != NULL)
	{
		printf("NODE %d\nvalue = %ld\n", i + 1, a->value);
		printf("adresse de nextnode : %p\n", a->next);
		printf("rang i : %ld\n\n", a->rang);
		a = a->next;
		i++;
	}
	display_op(&op);
}

// ------TEST VERIFNUM------ ok
// int	main(int argc, char **argv)
// {
// 	/*int i = 0;
// 	printf("argc = %i\n", argc);
// 	while (i < argc)
// 	{
// 		printf("\n	argv[%i] = %s\n", i, argv[i]);*/
// 	if (ft_verifnum(argc, argv) == 2)
// 	{
// 		// printf("	is num ? %i\n", ft_verifnum(argc, argv));
// 		return (1);
// 	}
// 	else
// 		printf("	is a list ? %ld\n", ft_createlist(argc, argv)->value);

// 	/*i++;
// }*/
// }

//------TEST CREATELIST------ ok
// int	main(int argc, char **argv)
// {
// 	//int		i;
// 	t_list	*a;
// 	t_list	*b;
// 	t_count op;

// 	//i = 0;
// 	ft_verifnum(argc, argv);
// 	a = ft_createlist(argc, argv);
// 	b = NULL;
// 	initialize_op(&op);

// 	// ft_rang(&a);

// 	//ft_pushchunk(&a, &b, &op);
// 	printf("Disorder : %f\n", disorder(a));
// 	adapt_sort(&a, &b, &op);
// 	display_pa(&op);

// printf(">>>> STACK A\n");
// while (a != NULL)
// {
// 	printf("NODE %d\nvalue = %ld\n", i + 1, a->value);
// 	printf("adresse de nextnode : %p\n", a->next);
// 	printf("rang i : %ld\n\n", a->rang);
// 	a = a->next;
// 	i++;
// }

// printf(">>>> STACK B\n");
// i = 0;
// while (b != NULL)
// {
// 	printf("NODE %d\nvalue = %ld\n", i + 1, b->value);
// 	printf("adresse de nextnode : %p\n", b->next);
// 	printf("rang i : %ld\n\n", b->rang);
// 	b = b->next;
// 	i++;
// }
//}

// ------TEST PUSH------ ok
// int	main(int argc, char **argv)
// {
// 	int		i;
// 	t_list	*a;
// 	t_list	*b;

// 	i = 0;
// 	a = ft_createlist(argc, argv);
// 	b = NULL;
// 	ft_push(&a, &b);
// 	while (a != NULL)
// 	{
// 		printf("NODE %da\nvalue = %ld\n", i + 1, a->value);
// 		printf("adresse de nextnode :%p\n\n", a->next);
// 		a = a->next;
// 		i++;
// 	}
// 	printf("NODE %db\nvalue = %ld\n", 1, b->value);
// 	printf("adresse de nextnode :%p\n\n", b->next);

// }

// ------TEST ROTATE------ ok
// int	main(int argc, char **argv)
// {
// 	int		i;
// 	t_list	*a;

// 	i = 0;
// 	a = ft_createlist(argc, argv);
// 	ft_rotate(&a);
// 	while (a != NULL)
// 	{
// 		printf("NODE %da\nvalue = %ld\n", i + 1, a->value);
// 		printf("adresse de nextnode :%p\n\n", a->next);
// 		a = a->next;
// 		i++;
// 	}
// }

// ------TEST RROTATE------ ok
// int	main(int argc, char **argv)
// {
// 	int i;
// 	t_list *a;

// 	i = 0;
// 	a = ft_createlist(argc, argv);
// 	ft_rrotate(&a);
// 	while (a != NULL)
// 	{
// 		printf("NODE %da\nvalue = %ld\n", i + 1, a->value);
// 		printf("adresse de nextnode :%p\n\n", a->next);
// 		a = a->next;
// 		i++;
// 	}
// }

// ------TEST DISORDER------ ok
// int	main(int argc, char **argv)
// {
// 	t_list *a;
// 	a = ft_createlist(argc, argv);
// 	printf("Size stack A : %i\n\n", ft_lstsize(a));
// 	printf("Disorder de la stack : %f\n", disorder(a));
// }

// ------TEST ALGO SIMPLE------
// int	main(int argc, char **argv)
// {
// 	int		i;
// 	t_list	*a;

// 	i = 0;
// 	a = ft_createlist(argc, argv);
// 	printf("Adress list : %p\n", a);
// 	bubble_sort(&a);
// 	while (a != NULL)
// 	{
// 		printf("A NODE %d\nvalue = %ld\n", i + 1, a->value);
// 		printf("A adresse de nextnode :%p\n\n", a->next);
// 		a = a->next;
// 		i++;
// 	}
// }

// ------TEST COUNT OP------
// int	main(int argc, char **argv)
// {
// 	t_list	*a;
// 	t_count	op;
// 	a = ft_createlist(argc, argv);
// 	initialize_op(&op);
// 	display_pa(&op);
//     if (disorder(a) <= 0.21)
// 	{    bubble_sort(&a, &op);
//         display_pa(&op);
//     }
//     else
//     {
//         printf("disordert: %f, Autre algo requis\n", disorder(a));
//         return(1);
//     }
// 	return (0);
// }

// ------TEST SELECT SMALLEST------ OK
// int	main(int argc, char **argv)
// {
// 	t_list	*a;

// 	a = ft_createlist(argc, argv);
// 	printf("%ld\n", select_smallest(&a, 45)->value);
// }

//------TEST SELECT BIGGEST------ OK
// int	main(int argc, char **argv)
// {
// 	t_list	*a;

// 	a = ft_createlist(argc, argv);
// 	printf("%ld\n", select_biggest(&a)->value);
// }

// TEST RACINE // OK
// int main()
// {
// 	int i;
// 	int res;
// 	i = 350;
// 	res = ft_racine(i);
// 	printf("%d\n", res);
// }

// TEST FCT 50/50 // OK
// int main(int argc, char **argv)
// {
// 	t_list *lst;

// 	lst = ft_createlist(argc, argv);
// 	printf("%d\n", ft_pince(&lst));
// }

// ------TEST RANG TO VALUE------//
// int	main(int argc, char **argv)
// {
// 	t_list	*a;

// 	a = ft_createlist(argc, argv);

// 	ft_rang(&a);

// 	while (a->next != NULL)
// 	{
// 		printf("%ld\n", a->rang);
// 		a = a->next;
// 	}
// }
