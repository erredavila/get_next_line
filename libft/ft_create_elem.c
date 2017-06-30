/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_create_elem.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdavila <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/18 11:10:57 by rdavila           #+#    #+#             */
/*   Updated: 2017/01/18 11:12:54 by rdavila          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_create_elem(void *content, size_t content_size)
{
	t_list *list;

	list = (t_list *)malloc(sizeof(*list));
	if (!list)
		return (NULL);
	list->content = content;
	list->content_size = content_size;
	list->next = NULL;
	return (list);
}
