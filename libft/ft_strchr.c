#include"libft.h"
char	*ft_strchr(const char *s, int c)
{
	char	*str;

	str = (char *)s;
	while (*str != c)
	{
		if (*str == '\0')
		{
			return (NULL);
		}
		str++;
	}
	return (str);
}

int	main(void)
{
	const char	str[] = "mubonico";
	const char	ch = 'c';
	char		*ret;

	ret = ft_strchr(str, ch);
	printf("|%c|==>>|%s|\n", ch, ret);
	return (0);
}
