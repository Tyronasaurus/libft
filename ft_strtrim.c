/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbarlow- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/09 10:20:15 by tbarlow-          #+#    #+#             */
/*   Updated: 2017/06/09 13:26:51 by tbarlow-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s)
{
	char	*str;
	int		i;
	int		len;
	int		k;

	if (s == NULL)
		return (0);
	i = 0;
	len = ft_strlen((char *)s) - 1;
	k = 0;
	while (s[i] == ' ' || s[i] == '\n' || s[i] == '\t')
	   i++;
	str = (char *)malloc(sizeof(char) * (len - i + 1));
	if (str == NULL)
		return (0);
	while (s[len] == ' ' || s[len] == '\n' || s[len] == '\t')
		len--;
	while (i <= len)
	{
		str[k] = s[i];
		k++;
		i++;
	}
	str[k] = '\0';
	return (str);
}
