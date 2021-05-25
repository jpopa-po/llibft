#include"libft.h"
void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*aux;

	aux = malloc(nmemb * size);
	if (!aux)
		return (NULL);
	ft_bzero(aux, (nmemb * size));
	return (aux);
}
