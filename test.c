// long	ft_atoi(const char *nptr)
// {
// 	int		i;
// 	long	res;
// 	long	sign;

// 	i = 0;
// 	res = 0;
// 	sign = 1;
// 	while ((nptr[i] >= 9 && nptr[i] <= 13) || nptr[i] == 32)
// 	{
// 		i++;
// 	}
// 	if (nptr[i] == '-' || nptr[i] == '+')
// 	{
// 		if (nptr[i] == '-')
// 			sign = -1;
// 		i++;
// 	}
// 	while (nptr[i] != '\0' && nptr[i] >= '0' && nptr[i] <= '9')
// 	{
// 		res = res * 10 + (nptr[i] - '0');
// 		i++;
// 	}
// 	return (res * sign);
// }

// #include <stdio.h>

// int	main(void)
// {
// 	char *str = "1256";
// 	long n = ft_atoi(str);

// 	printf("%ld\n", n);
// }