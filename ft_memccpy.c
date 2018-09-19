/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbarlow- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/29 13:38:11 by tbarlow-          #+#    #+#             */
/*   Updated: 2017/05/29 13:50:37 by tbarlow-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	char	*strdst;
	char	*strsrc;
	size_t	i;

	i = 0;
	strdst = (char *)dst;
	strsrc = (char *)src;
	if (n == 0 || strdst == strsrc)
		return (NULL);
	while (i < n)
	{
		strdst[i] = strsrc[i];
		if (strsrc[i] == c)
			return (&strdst[i + 1]);
		i++;
	}
	return (NULL);
}
