/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memchr.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbarlow- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/29 14:23:29 by tbarlow-          #+#    #+#             */
/*   Updated: 2017/06/01 12:25:52 by tbarlow-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *src, int c, size_t n)
{
	unsigned char		*strsrc;
	unsigned char		c2;
	int					i;

	strsrc = (unsigned char *)src;
	c2 = (unsigned char)c;
	i = 0;
	while (n--)
	{
		if (strsrc[i] == c2)
			return (&strsrc[i]);
		i++;
	}
	return (0);
}
