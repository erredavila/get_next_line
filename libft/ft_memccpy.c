/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdavila <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/08 14:54:00 by rdavila           #+#    #+#             */
/*   Updated: 2017/01/13 15:23:20 by rdavila          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	while (n)
	{
		*((char*)dst) = *((char*)src);
		if ((char)(c) == *((char*)dst))
			return (++dst);
		dst++;
		src++;
		n--;
	}
	return (NULL);
}
