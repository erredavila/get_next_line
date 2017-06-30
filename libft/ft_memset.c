/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdavila <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/08 13:12:23 by rdavila           #+#    #+#             */
/*   Updated: 2017/01/09 10:43:22 by rdavila          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char *ret;

	ret = (unsigned char *)b;
	while (len)
	{
		*ret = (unsigned char)c;
		ret++;
		len--;
	}
	return (b);
}
