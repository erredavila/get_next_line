/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdavila <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/09 11:28:36 by rdavila           #+#    #+#             */
/*   Updated: 2017/01/09 11:38:56 by rdavila          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memalloc(size_t size)
{
	void *ret;

	ret = (void *)malloc(sizeof(*ret) * (size));
	if (ret == NULL)
		return (NULL);
	ft_bzero(ret, size);
	return (ret);
}
