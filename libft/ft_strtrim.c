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
	char	*str;
	int		i;
	int		j;
	int		len;

	i = 0;
	j = 0;
	len = ft_strlen(s) - 1;
	str = ft_substr(s, i, len - j - i + 1);
	while (s[i] == ' ' || s[i] == '\n' || s[i] == '\t')
		i++;
	while (s[len - j] == ' ' || s[len - j] == '\n' || s[len - j] == '\t')
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
	if (!str)
		return (NULL);
	return (str);
}
