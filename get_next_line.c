/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdavila <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/17 19:29:04 by rdavila           #+#    #+#             */
/*   Updated: 2017/02/23 15:27:36 by rdavila          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

static t_list	*ft_get_node(t_list **begin_list, int fd)
{
	t_list	*list;

	list = *begin_list;
	while (list)
	{
		if ((int)list->content_size == fd)
			return (list);
		list = list->next;
	}
	list = ft_lstnew("\0", fd);
	ft_lstadd(begin_list, list);
	list = *begin_list;
	return (list);
}

int				get_next_line(const int fd, char **line)
{
	static t_list	*list;
	t_list			*current;
	char			buffer[BUFF_SIZE + 1];
	int				read_count;
	int				copy;

	if (fd < 0 || read(fd, buffer, 0) < 0 || !line)
		return (-1);
	current = ft_get_node(&list, fd);
	while ((read_count = read(fd, buffer, BUFF_SIZE)))
	{
		buffer[read_count] = '\0';
		current->content = ft_strjoin(current->content, buffer);
		if (ft_strchr(buffer, '\n'))
			break ;
	}
	if (!read_count && !ft_strlen(current->content))
		return (0);
	if (!(copy = ft_tochar(current->content, '\n')))
		copy = ft_strlen(current->content) + 1;
	*line = ft_strnew(copy + 1);
	ft_strncpy(*line, current->content, copy - 1);
	ft_bzero(current->content, copy);
	current->content += copy;
	return (1);
}
