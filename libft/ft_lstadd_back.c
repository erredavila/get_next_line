/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdavila <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/18 11:06:09 by rdavila           #+#    #+#             */
/*   Updated: 2017/01/18 11:10:50 by rdavila          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list *begin_list, void *content, size_t content_size)
{
	while (begin_list->next)
		begin_list = begin_list->next;
	begin_list->next = ft_create_elem(content, content_size);
}
