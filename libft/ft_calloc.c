#include"libft.h"
void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*aux;

	if (!(aux = malloc(nmemb * size)))
		return (NULL);
	ft_bzero(aux, (nmemb * size));
	return (aux);
}
