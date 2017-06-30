/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdavila <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/08 16:13:41 by rdavila           #+#    #+#             */
/*   Updated: 2017/01/10 17:15:18 by rdavila          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char	*s1;
	char	*s2;
	size_t	i;

	i = -1;
	s1 = (char *)dst;
	s2 = (char *)src;
	if (s2 < s1)
		while ((int)(--len) >= 0)
			*(s1 + len) = *(s2 + len);
	else
		while (++i < len)
			*(s1 + i) = *(s2 + i);
	return (dst);
}
