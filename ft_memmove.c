/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memmove.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbarlow- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/29 14:01:20 by tbarlow-          #+#    #+#             */
/*   Updated: 2017/05/29 14:13:26 by tbarlow-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t n)
{
	size_t	i;

	if (!((int *)dst > (int *)src && (int *)src + n > (int *)dst))
		ft_memcpy(dst, (void *)src, n);
	else
	{
		i = n;
		while (i-- > 0)
			*((char *)dst + i) = *((char *)src + i);
	}
	return (dst);
}
