

int	vu(char *str, char c)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] == c)
		    return (1);
		i++;
	}
	return (0);
}

int doublon(char *str, char c)
{
    
}

#include <stdio.h>

int	main(void)
{
	char	str[] = "hello green wordl!";
	char	c;
	char	d;
	int		a;
	int		b;

	c = 'c';
	d = 'd';
	a = vu(str, c);
	b = vu(str, d);
	printf("%d\n", a);
	printf("%d\n", b);
}

// int main(int argc, char **argv)
// {
//     if(argc == 3)
//     {
//         while(argv[1][i])
//         {
//             while(argv[1][j])
//             {
//                 if(argv[1][i] != argv[1][j])
//                     write(1, &argv[1][i]);
//                 j++;
//             }
//             i++;
//         }
//         while(argv[2][j])
//         {

//         }
//     }
// }
