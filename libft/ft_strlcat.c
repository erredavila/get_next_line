/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdavila <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/11 17:55:18 by rdavila           #+#    #+#             */
/*   Updated: 2017/01/11 18:17:17 by rdavila          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	end;

	i = 0;
	while (dst[i] && i < size)
		i++;
	end = i;
	while (src[i - end] && i < size - 1 && size)
	{
		dst[i] = src[i - end];
		i++;
	}
	if (end < size)
		dst[i] = '\0';
	return (end + ft_strlen(src));
}
