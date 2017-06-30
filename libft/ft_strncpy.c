/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdavila <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/07 11:40:28 by rdavila           #+#    #+#             */
/*   Updated: 2017/01/09 13:38:47 by rdavila          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncpy(char *dst, const char *src, size_t len)
{
	char *tmp;

	tmp = dst;
	while (*src && len)
	{
		*tmp = *src;
		tmp++;
		src++;
		len--;
	}
	while (len)
	{
		*tmp = '\0';
		tmp++;
		len--;
	}
	return (dst);
}
