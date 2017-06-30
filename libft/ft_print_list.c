/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_list.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdavila <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/12 13:24:19 by rdavila           #+#    #+#             */
/*   Updated: 2017/01/18 11:19:20 by rdavila          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_print_list(t_list *list)
{
	int i;

	i = 1;
	if (list)
	{
		while (list)
		{
			ft_putnbr(i);
			ft_putstr(": ");
			ft_putstr(list->content);
			ft_putstr(" (");
			ft_putnbr(list->content_size);
			ft_putstr(")\n");
			list = list->next;
			i++;
		}
	}
}
