/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kiru <kiru@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/22 20:32:14 by kiru              #+#    #+#             */
/*   Updated: 2021/05/22 20:34:29 by kiru             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char			*str;
	unsigned int	i;
	unsigned int	j;
	unsigned int	sl;

	str = malloc(sizeof(char) * (len + 1));
	sl = ft_strlen(s);
	if (!str || !s)
		return (NULL);
	i = start;
	j = 0;
	if (start < sl)
	{
		while (i < start + len && s[i] != '\0')
		{
			str[j] = s[i];
			j++;
			i++;
		}
	}
	str[j] = '\0';
	return (str);
}
