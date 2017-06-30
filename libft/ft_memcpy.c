/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdavila <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/08 13:51:52 by rdavila           #+#    #+#             */
/*   Updated: 2017/01/09 14:45:57 by rdavila          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	char		*ret;
	const char	*source;

	ret = (char *)dst;
	source = (const char *)src;
	while (n)
	{
		*ret = *source;
		ret++;
		source++;
		n--;
	}
	return (dst);
}
