/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbarlow- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/08 09:25:50 by tbarlow-          #+#    #+#             */
/*   Updated: 2017/06/08 09:25:51 by tbarlow-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *haystack, const char *needle)
{
	int		i;
	int		j;
	int		c;

	i = 0;
	c = 0;
	if (needle[0] == '\0')
		return ((char *)haystack);
	while (haystack[i])
	{
		j = i;
		c = 0;
		while (haystack[j] == needle[c])
		{
			j++;
			c++;
			if (needle[c] == '\0')
				return (char *)(&haystack[i]);
		}
		i++;
	}
	return (0);
}
