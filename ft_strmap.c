/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbarlow- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/09 10:19:13 by tbarlow-          #+#    #+#             */
/*   Updated: 2017/06/09 10:19:14 by tbarlow-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
{
	char	*fstr;
	int		i;
	int		j;

	i = 0;
	if (s == NULL || f == NULL)
		return (0);
	j = ft_strlen((char *)s);
	fstr = (char *)malloc((j + 1) * sizeof(char));
	if (fstr == NULL)
		return (0);
	while (s[i])
	{
		fstr[i] = f(s[i]);
		i++;
	}
	fstr[i] = '\0';
	return (fstr);
}
