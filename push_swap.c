/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
<<<<<<< HEAD
/*   By: mapointi <mapointi@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/16 14:58:41 by mapointi          #+#    #+#             */
/*   Updated: 2026/08/12 23:26:13 by mapointi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// au propre
=======
/*   By: mapointi <marion.pointier-fourcart@lear    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/16 14:58:41 by mapointi          #+#    #+#             */
/*   Updated: 2026/06/18 14:14:06 by mapointi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

>>>>>>> de26f2275846daea362787021363c947bf126711
// void	ft_which_flag(argv) if ft_strcmp (argv[1], "--bench") *mode = 4;

#include "push_swap.h"

<<<<<<< HEAD

int	ft_veriflag(char **argv)
{
	if (is_bench(*argv) == 1 || is_adaptive(*argv) == 1 
	|| is_simple(*argv) == 1
	|| is_medium(*argv) == 1 || is_complex(*argv) == 1)
		return (1);
	else
		return (0);
}

int	ft_verifnum(int argc, char **argv)
{
	int	i;
	int	j;

	i = 1;
	while (i < argc)
	{
		while (ft_veriflag(&argv[i]) == 1)
			i++;
		j = 0;
		while (argv[i][j] == ' ')
			j++;
		if (argv[i][j] == '-')
			j++;
		while (argv[i][j] != '\0')
		{
			if (ft_isdigit(argv[i], argv[i][j]) == 0)
				error_exit();
			j++;
=======
int	ft_verifnum(int argc, char **argv) // nos arguments sont-ils bien des int?
{
	int i;
	int j;

	i = 1;
	while (i < argc) // tu rentre dans ta ligne
	{
		j = 0;
		while (argv[i][j] == ' ')
			j++;
		if (argv[i][j] == '-') // on ajoute cas blank si il faut ?
			j++;
		// printf("toute la ligne : %s\n", argv[i]);
		while (argv[i][j] != '\0')
		{
			// printf("verif : %c\n", argv[i][j]);
			if (ft_isdigit(argv[i][j]) == 0) // si c pas un digit
			{
				// open(2);
				write(2, "Error\n", 6); // ici si c pas un chiffre
				return (2);             // notre code erreur est 2
			}
			j++; // i c la ligne et j c les car dans la ligne
>>>>>>> de26f2275846daea362787021363c947bf126711
		}
		i++;
	}
	return (0);
}

<<<<<<< HEAD
int	av_too_long(char *str_argv)
{
	int	i;

	i = 0;
	while (str_argv[i])
		i++;
	i -= 1;
	if (i >= 14)
=======
int	ft_createlist(int argc, char **argv) // creation des stacks
{
	t_list *stack_a;
	t_list *stack_b;
	int i;

	i = 0;
	while (i <= argc)
	{
		stack_a = ft_lstnew(argv[i]);
		printf("%i\n", stack_a->(int)content);
		i++;
	}
	stack_b = malloc(sizeof(t_list) * (ft_lstsize(stack_a) + 1));
	if (!stack_b)
>>>>>>> de26f2275846daea362787021363c947bf126711
		return (1);
	return (0);
}

<<<<<<< HEAD
// if (i >= 14) //où sort_medium est a

t_list	*ft_createlist(int argc, char **argv)
{
	t_list	*stack_a;
	t_list	*newnode;
	int		i;

	i = 1;
	stack_a = 0;
	newnode = 0;
	if (argc < 2)
		error_exit();
	while (i < argc)
	{
		while(ft_veriflag(&argv[i]) == 1)
			i++;
		if (av_too_long(argv[i]))
			error_exit();
		newnode = ft_lstnew(ft_atoi(argv[i]));
		if ((newnode->value > INT_MAX || newnode->value < INT_MIN)
			|| (ft_cmp(argc, argv) == 1))
			error_exit();
		ft_lstadd_back(&stack_a, newnode);
		i++;
	}
	return (stack_a);
}

float	disorder(t_list *lst)
{
	float	mistakes;
	float	total_pairs;
	float	disorder;

	mistakes = 0;
	total_pairs = 0;
	while (lst->next != NULL)
	{
		if (lst->value > lst->next->value)
			mistakes++;
		total_pairs++;
		lst = lst->next;
	}
	disorder = mistakes / total_pairs;
	return (disorder);
}

void	*error_exit(void)
{
	write(2, "Error\n", 6);
	exit (1);
}
=======
/*int	ft_parsing(int argc, char **argv)
{
	if (ft_verifnum(argc, argv) == 2) // si ta func tenvoie une erreur
		return (2);
}

if (argv[1])
	if (n'est pas entre 0 et 9 inclu negatif return NULL*/
// handle intmax et intmin
// conversion a to int
// handle les doubles
// avec "bubble sort" a la fin ou a la voler

int	main(int argc, char **argv)
{
	/*int i = 0;

	printf("argc = %i\n", argc);
	while (i < argc)
	{
		printf("\n	argv[%i] = %s\n", i, argv[i]);*/
	if (ft_verifnum(argc, argv) == 2)
	{
		// printf("	is num ? %i\n", ft_verifnum(argc, argv));
		return (1);
	}
	else
		printf("	is a list ? %i\n", ft_createlist(argc, argv));

	/*i++;
}*/
}
>>>>>>> de26f2275846daea362787021363c947bf126711
