/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ideas.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inhoufan <inhoufan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/16 14:58:41 by mapointi          #+#    #+#             */
/*   Updated: 2026/06/29 18:16:26 by inhoufan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// void	ft_which_flag(argv) if ft_strcmp (argv[1], "--bench") *mode = 4;

// #include "push_swap.h"

// int	ft_verifnum(int argc, char **argv) // nos arguments sont-ils bien des int?
// {
// 	int i;
// 	int j;

// 	i = 1;
// 	while (i < argc) // tu rentre dans ta ligne
// 	{
// 		j = 0;
// 		while (argv[i][j] == ' ')
// 			j++;
// 		if (argv[i][j] == '-') // ajouter = int max int min, eviter les doublons
// 			j++;
// 		// printf("toute la ligne : %s\n", argv[i]);
// 		while (argv[i][j] != '\0')
// 		{
// 			// printf("verif : %c\n", argv[i][j]);
// 			if (ft_isdigit(argv[i][j]) == 0) // si c pas un digit
// 			{
// 				write(2, "Error\n", 6); // ici si c pas un chiffre
// 				return (2);             // notre code erreur est 2
// 			}
// 			j++; // i c la ligne et j c les car dans la ligne
// 		}
// 		i++;
// 	}
// 	return (0);
// }

// t_list	*ft_createlist(int argc, char **argv) // creation des stacks
// {
// 	t_list *stack_a;
// 	t_list *newnode;
// 	int i;
// 	int j;

// 	i = 1;
// 	j = 1;
// 	stack_a = 0;
// 	newnode = 0;
// 	while(i < argc)
// 	{
// 		newnode = ft_lstnew(ft_atoi(argv[i]));
// 		if (newnode->value > INT_MAX || newnode->value < INT_MIN)
// 		{
// 			write(2, "Error\n", 6);
// 			return (NULL);
// 		}
// 		while (j < argc)
// 		{
// 			if (ft_atoi(argv[i]) == ft_atoi(argv[j]))
// 				return (NULL);
// 			else
// 				j++;
// 		}
// 		ft_lstadd_back(&stack_a, newnode);
// 		i++;
// 	}
// 	return (stack_a);
// }


// // 	stack_a = 0;
// // 	i = 1; // on commence au second arg pas a a.out 
// // 	while (i < argc)
// // 	{
// // 		newnode = ft_lstnew(ft_atoi(argv[i])); // on est sur des int donc on doit utiliser atoi
// // 		ft_lstadd_back(stack_a, newnode);
// // 		// printf("%i\n", stack_a->value); lstaddback pour relier les noeuds 
// // 		// relier pcq la a chaque fois il s'ecrase 
// // 		i++;
// // 	}
// // 	//newnode->next = NULL;
// // 	stack_b = malloc(sizeof(t_list) * (ft_lstsize(*stack_a) + 1));
// // 	if (!stack_b)
// // 		return (1);
// // 	return (0);
// // }

// /*int	ft_parsing(int argc, char **argv)
// {
// 	if (ft_verifnum(argc, argv) == 2) // si ta func tenvoie une erreur
// 		return (2);
// }

// if (argv[1])
// 	if (n'est pas entre 0 et 9 inclu negatif return NULL*/
// // handle intmax et intmin
// // conversion a to int
// // handle les doubles
// // avec "bubble sort" a la fin ou a la voler

// // int	main(int argc, char **argv)
// // {
// // 	int i = 0;
// // 	t_list *a = ft_createlist(argc, argv);

// // 	while (a != NULL)
// // 	{
// // 		printf("NODE %d\nvalue = %d\n", i, a->value);
// // 		printf("adresse de nextnode :%p\n\n", a->next);
// // 		a = a->next;
// // 		i++;
// // 	}
// // }
