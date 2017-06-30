/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdavila <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/06 17:42:31 by rdavila           #+#    #+#             */
/*   Updated: 2017/01/09 15:06:25 by rdavila          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char *ret;

	ret = (char *)s;
	while (*ret)
	{
		if (*ret == (char)c)
			return (ret);
		ret++;
	}
	if (*ret == c)
		return (ret);
	return (NULL);
}
