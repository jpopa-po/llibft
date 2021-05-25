#include"libft.h"
int	ft_atoi(const char *nptr)
{
	long	n;
	long	i;
	long	sign;

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
	else if (nptr[i] == 43 || nptr[i] == 45)
		i++;
	while (nptr[i] && ft_isdigit(nptr[i]) == 1)
	{
		n = n * 10 + (nptr[i++] - 48);
		if ((n * sign) > 2147483647)
			return (-1);
		if ((n * sign) < -2147483648)
			return (0);
	}
	return (sign * n);
}
