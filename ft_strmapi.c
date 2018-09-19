/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbarlow- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/09 10:19:24 by tbarlow-          #+#    #+#             */
/*   Updated: 2017/06/09 10:19:25 by tbarlow-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	int		i;
	size_t	size;
	char	*fstr;

	i = 0;
	if (s == NULL || f == NULL)
		return (0);
	size = ft_strlen((char *)s);
	fstr = (char *)malloc((size + 1) * sizeof(char));
	if (fstr == NULL)
		return (0);
	while (s[i])
	{
		fstr[i] = f(i, s[i]);
		i++;
	}
	fstr[i] = '\0';
	return (fstr);
}
