/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hchung <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/09 15:28:47 by hchung            #+#    #+#             */
/*   Updated: 2018/09/09 16:06:29 by hchung           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

int		get_next_line(const int fd, char **line)
{
	static char		*library[FILE_DESC];
	char			hold_cell[BUFF_SIZE + 1];
	char			*clone_zone;
	int				chars_read;

	if (fd < 0 || !line || fd > FILE_DESC)
		return (-1);
	while (chars_read = read(fd, hold_cell, BUFF_SIZE) > 0)
	{
		hold_cell[chars_read] = '\0';
		if (library[fd] == NULL)
			library[fd] = ft_strnew(1);
		clone_zone = ft_strjoin(library[fd], buf);
		free (library[fd]);
		library[fd] = clone_zone;
		if (ft_strchr(hold_cell, '\n'))
			break;
	}
	if (chars_read < 0)
		return (-1);
	else if (chars_read == 0)
		return (0);
	else
		return (return_line(int fd, char **library, 
}
		
