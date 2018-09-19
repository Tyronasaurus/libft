/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbarlow- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/08 09:25:22 by tbarlow-          #+#    #+#             */
/*   Updated: 2017/06/08 09:25:22 by tbarlow-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t n)
{
	size_t	c;
	size_t	destlen;
	size_t	srclen;

	destlen = ft_strlen(dest);
	srclen = ft_strlen(src);
	c = 0;
	if (n <= destlen)
		return (srclen + n);
	while (dest[c] != '\0' && (c < (n - 1)))
		c++;
	while (*src && c < (n - 1))
	{
		dest[c] = *src;
		c++;
		src++;
	}
	dest[c] = '\0';
	return (destlen + srclen);
}
