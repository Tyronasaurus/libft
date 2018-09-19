/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbarlow- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/14 10:36:04 by tbarlow-          #+#    #+#             */
/*   Updated: 2017/06/14 11:56:46 by tbarlow-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*realloc(void *ptr, size_t bytesr)
{
	char	*tmp;

	if (!bytesr && ptr)
	{
		if (!(tmp = (char *)malloc(1)))
			return (0);
		ft_memdel(&ptr);
		return (tmp);	
	}
	if (!(tmp = (char *)malloc(bytesr)))
		return (0);
	if (ptr)
	{
		ft_memcpy(tmp, ptr, bytesr);
		ft_memdel(&ptr);
	}
	return (tmp);
}
char	getchar(const int fd)
{
	static char	buffer[BUFF_SIZE];
	static char	*ptr;
	static int	bytesr = 0;
	char		c;

	if (bytesr == 0)
	{
		if ((bytesr = read(fd, buffer, BUFF_SIZE)) < 0)
			return (0);
		ptr = (char *)&buffer;
		if (bytesr == 0)
			return (0);
	}
	c = *ptr;
	ptr++;
	bytesr--;
	return (c);
}

int		get_next_line(const int fd, char **line)
{
    int		bytesr;
    char	c;
    char	*str;
    
    if (fd < 0 || line == NULL)
        return (-1);
    bytesr = 0;
    if ((str = (char *)malloc(BUFF_SIZE + 1)) == NULL)
        return (-1);
    if ((c = getchar(fd)) == 0)
        return (-1);
    while (c != '\n' && c != '\0')
    {
        str[bytesr] = c;
        if ((c = getchar(fd)) == 0)
            return (-1);
        bytesr++;
        if ((bytesr % (BUFF_SIZE + 1)) == 0)
            str = realloc(str, bytesr + BUFF_SIZE + 1);
    }
    if ((*line = (char *)malloc(sizeof(char *) * bytesr)) == NULL)
        return (-1);
    str[bytesr] = 0;
    *line = str;
    return (1);
}
