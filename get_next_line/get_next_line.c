/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anmoldov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/08 19:28:44 by anmoldov          #+#    #+#             */
/*   Updated: 2017/03/08 19:47:41 by anmoldov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

static int		ft_rread(int const fd, char **stock)
{
	int		i;
	char	*str;
	char	*buffer;

	if (!(buffer = (char *)malloc(sizeof(*buffer) * (BUFF_SIZE + 1))))
		return (-1);
	i = read(fd, buffer, BUFF_SIZE);
	if (i > 0)
	{
		buffer[i] = '\0';
		str = ft_strjoin(*stock, buffer);
		free(*stock);
		*stock = str;
	}
	free(buffer);
	return (i);
}

int				get_next_line(int const fd, char **line)
{
	static char	*s = NULL;
	char		*eol;
	int			i;

	if ((!s && (s = (char *)malloc(sizeof(*s))) == NULL) || !line
			|| fd < 0 || BUFF_SIZE < 0)
		return (-1);
	eol = ft_strchr(s, '\n');
	while (eol == NULL)
	{
		i = ft_rread(fd, &s);
		if (i == 0)
		{
			if (ft_strlen(s) == 0)
				return (0);
			s = ft_strjoin(s, "\n");
		}
		if (i < 0)
			return (-1);
		else
			eol = ft_strchr(s, '\n');
	}
	*line = ft_strsub(s, 0, ft_strlen(s) - ft_strlen(eol));
	s = ft_strdup(eol + 1);
	return (1);
}
