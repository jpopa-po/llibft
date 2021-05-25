#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*tab;
	int		i;

	tab = malloc(sizeof(char) * (ft_strlen(s) + 1));
	if (!s || (!tab))
		return (NULL);
	i = 0;
	while (s[i])
	{
		tab[i] = (*f)(i, s[i]);
		i++;
	}
	tab[i] = '\0';
	return (tab);
}
