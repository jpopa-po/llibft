#include"libft.h"
int	ft_lstsize(t_list *lst)
{
	size_t	i;

	i = 0;
	if (!lst)
		return (0);
	while (lst->next != 0)
	{
		lst = lst->next;
		i++;
	}
	return (i);
}
