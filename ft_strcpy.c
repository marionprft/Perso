//OK

char	*ft_strcpy(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s2[i])
	{
		s1[i] = s2[i];
		i++;
	}
	s1[i] = 0;
	return (s1);
}

#include <stdio.h>

int		main(void)
{
	char dst[] = "bon";
	char src[] = "tmjiofg0000aoo";

	ft_strcpy(dst, src);
	printf("%s\n", dst);
}