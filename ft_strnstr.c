/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbarlow- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/08 09:25:57 by tbarlow-          #+#    #+#             */
/*   Updated: 2017/06/08 09:25:58 by tbarlow-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t n)
{
	size_t	len;
	int		cmp;

	if (*needle == '\0')
		return ((char *)haystack);
	len = ft_strlen(needle);
	while (*haystack && n-- >= len)
	{
		cmp = ft_memcmp(haystack, needle, len);
		if (*haystack == *needle && cmp == 0)
			return ((char *)haystack);
		haystack++;
	}
	return (0);
}
