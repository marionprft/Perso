

int	ft_atoi(const char *str)
{
	int		i;
	long	res;
	int		sign;

	sign = 1;
	i = 0;
	while (str[i])
	{
		if (str[i] >= 7 && str[i] <= 13)
			i++;
		while (str[i] == '-' || str[i] == '+')
		{
			if (str[i] == '-')
				sign = -sign;
			i++;
		}
		if (str[i] >= '0' && str[i] <= '9')
			res = res * 10 + (str[i] - 48);
		i++;
	}
	return (sign * res);
}

#include <stdio.h>

int	main(void)
{
	char str[] = "++--?? 596";
	long res;

	res = ft_atoi(str);
	printf("%ld\n", res);
}