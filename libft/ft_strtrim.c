/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kiru <kiru@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/22 21:07:13 by kiru              #+#    #+#             */
/*   Updated: 2021/05/24 17:32:56 by kiru             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s)
{
	char		*str;
	int		i;
	int		j;
	int		len;

	i = 0;
	j = 0;
	len = ft_strlen(s) - 1;
	str = ft_substr(s, i, len - j - i + 1);
	if (!str)
		return (NULL);
	while (s[i] == 32 || s[i] == 10 || s[i] == 9)
		i++;
	while (s[len - j] == 32 || s[len - j] == 10 || s[len - j] == 9)
		j++;
	if (i == 0 && j == 0)
	{
		str = ft_strdup(s);
		return (str);
	}
	if (i == len + 1)
	{
		str = "";
		return (str);
	}
	return (str);
}
