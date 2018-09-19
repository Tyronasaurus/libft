/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbarlow- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/09 10:19:02 by tbarlow-          #+#    #+#             */
/*   Updated: 2017/06/09 13:18:00 by tbarlow-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		i;
	int		j;
	char	*str;
	size_t	size;

	i = -1;
	j = -1;
	if (s1 == NULL || s2 == NULL)
		return (0);
	size = ft_strlen(s1) + ft_strlen(s2) + 1;
	str = (char *)malloc(size * (sizeof(char)));
	if (str == NULL)
		return (0);
	while (s1[++i])
		str[i] = s1[i];
	while (s2[++j])
	{
		str[i] = s2[j];
		i++;
	}
	str[i] = '\0';
	return (str);
}
