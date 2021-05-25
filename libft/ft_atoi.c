#include"libft.h"
int	ft_atoi(const char *nptr)
{
	long	n;
	int		i;
	int		sign;

	n = 0;
	i = 0;
	sign = 1;
	while ((nptr[i] >= 9 && nptr[i] <= 13) || nptr[i] == 32)
		i++;
	if (nptr[i] == 45)
	{
		sign = -1;
		i++;
	}
	else if (nptr[i] == 43)
		i++;
	while (nptr[i] && ft_isdigit(nptr[i]) == 1)
		n = n * 10 + nptr[i++] - 48;
	return (sign * n);
}
